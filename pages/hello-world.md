---
title: Hello World! - The first example in The C Programming Language
timestamp: 2024-06-18T07:50:01
author: szabgab
published: true
description: "The first C program: printing Hello World! to the screen"
tags:
    - include
    - stdio.h
    - int
    - main
    - printf
---

The very first C program to write is the one to print "Hello World!" to the screen.

We create a folder with the following file in it:

{% include file="examples/hello_world/hello_world.c" %}

On Linux we will use the gcc compiler. There are others, but as I understand this is the most popular compiler.

## Install gcc on Ubuntu Linux

```
$ sudo apt update
$ sudo apt install -y gcc
```

## Compile and run

Before we can run the program we need to compile it. We can do it with the following command:

```
$ gcc hello_world.c
```

This will create a file called `a.out` and make it executable. We can then run it:

```
$ ./a.out
Hello World!
```

## Compile to a specific name

You might not like the default name of `a.out`. You can tell `gcc` how to call the generated binary file using the `-o` (output) flag:


```
$ gcc -o hello hello_world.c
```

This will create a file called `hello` which we can run as `./hello`.

On Linux executables don't need to have an extension.


## Explanation of the source code

Every C program must have a function called `main` that is expected to return an integer `int`. We are not required to actually return it, but this is
how we need to define the function. C uses the C-like syntax (what a surprise here), using curly braces to denote block.

The indentation and in general the layout of the code does not matter to the C compilers, but it matters to the human read of the code so we will
use 4 spaces for indentation.

The C language is very basic, it can't even print to the screen on its own. We need to use a library to be able to print to the screen. The line

```
#include <stdio.h>
```

include the stdio (Standard Input and Output) library.

This allows us to use the `printf` function to print to the screen.


