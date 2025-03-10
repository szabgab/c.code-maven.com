# for each example 
#    compile the code
#    run the code
#    compare to out.txt

import glob
import os


def main():
    examples_dir = os.path.join(os.getcwd(), 'src', 'examples')
    examples = os.listdir(examples_dir)
    root = os.getcwd()

    error = 0
    for example in examples:
        os.chdir(root)
        example_dir = os.path.join(examples_dir, example)
        # The word-count gives different results on the CI server. Why?
        if example in ["out-of-range-index", "uninitialized", "word-count"]:
            continue
        if os.path.isdir(example_dir):
            print(example)
            os.chdir(example_dir)
            # get the source file
            src_files = glob.glob('*.c')
            # print(src_files)
            if len(src_files) > 1:
                print('Error: multiple source files')
                continue
            
            if len(src_files) < 1:
                print('Error: no source files')
                continue
            
            src_file = src_files[0]
            if (os.path.exists('a.out')):
                os.unlink('a.out')

            os.system('gcc ' + src_file)
            cmd = './a.out > /tmp/out.txt 2> /tmp/err.txt'
            if (os.path.exists('in.txt')):
                cmd += ' < in.txt'
            os.system(cmd)

            if (os.path.exists('out.txt')):
                expected_out = open('out.txt').read()
            else:
                expected_out = ''
            actual_out = open('/tmp/out.txt').read()
            if expected_out == actual_out:
                pass
                #print('Success')
            else:
                error += 1
                print('Failure: expected output is')
                print(expected_out)
                print('actual output is')
                print(actual_out)
                print('-----------')
            

            if (os.path.exists('err.txt')):
                expected_err = open('err.txt').read()
            else:
                expected_err = ''
            actual_err = open('/tmp/err.txt').read()
            if expected_err == actual_err:
                pass
                #print('Success')
            else:
                error += 1
                print('Failure: expected error is')
                print(expected_out)
                print('actual error is')
                print(actual_out)
                print('-----------')

    exit(error)

if __name__ == '__main__':  
    main()
       

