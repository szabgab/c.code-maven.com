# Copy STDIN to STDOUT


{{#include examples/copy-stdin-to-stdout/copy.c }}

* stdio.h is needed to get the definition of `EOF` End of file.


```
gcc copy.c
```

```
./a.out
Type some text
Ctrl-D
```

* On Linux and macOS we can press `Ctrl-D` on an empty line to send `EOF`.
* We can also redirect some file. e.g. `./a.out < copy.c` will redirect the content of the `copy.c` file to the STDIN of the program and that will print it to the screen.

