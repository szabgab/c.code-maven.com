---
title: Sinle-line and multi-line comments in the code
timestamp: 2024-06-21T15:10:01
author: szabgab
published: true
description: Add comments to the code
tags:
    - //
    - '/*'
---

C Allows us to add comments to the code in two ways.

A single-line comment start with `//` and ends at the end of the current line.

A multi-line comment starts with `/*`   and ends on some later line with `*/`.

This can be used to add explanation to the developers and maintainers of the code and also to temporarily disable some of the code.

{% include file="examples/comments/comments.c" %}

```
$ gcc comments.c
$ ./a.out
Hello World!
```
