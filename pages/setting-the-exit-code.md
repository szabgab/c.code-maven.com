---
title: Setting the exit code of the main function in C
timestamp: 2024-06-21T14:30:01
author: szabgab
published: true
description: Setting the exit code to a number between 0-255
tags:
    - int
    - main
    - return
todo:
    - exit in the middle of the code
---

In the [hello world example](/hello-world) we skipped over why the `main` function has to have a return value. Let's look at that now.

Every program that terminates sets a value we usually call `exit code`. The process that ran the program then can have access to the
exit code of the most recently ended program. On Linux and macOS the exit code of the previous program is stored in the `$?` variable.
On MS Windows it is store in the `%ERROR_LEVEL% variable.

If we run the program from a terminal, we can see the content of this variable using the

```
echo $?
```

on Linux and macOS or the

```
echo %ERROR_LEVEL%
```

command on MS Windows.

The value 0 indicates that the program terminated successfully. Any other number indicates that the program failed somehow.
The exact value and its meaning is determined by the developer of the program.

A program written in C can set its exit-code by returning it from the `main` function.
As we saw in the [hello world example](/hello-world) we don't need to return anything explicitly.

In that case the exit code will be set to 0.

## Set exit code implicitly

In the following example we can see that we don't even need all that printing stuff for this to work:

{% include file="examples/exit_code/implicit_exit_code.c" %}

```
$ gcc implicit_exit_code.c
$ ./a.out
$ echo $?
0
```

## Set exit code to 0 explicitly

We don't have to, but we can also `return 0` and set the exit code explicitly:

{% include file="examples/exit_code/explicit_exit_code_0.c" %}

```
$ gcc explicit_exit_code_0.c
$ ./a.out
$ echo $?
0
```


## Set exit code to 3 explicitly

If we would like to indicate some error condition we can also set the exit code to any number between 1-255, for example to 3:

{% include file="examples/exit_code/explicit_exit_code_3.c" %}

```
$ gcc explicit_exit_code_3.c
$ ./a.out
$ echo $?
3
```

