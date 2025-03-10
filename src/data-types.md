# Data Types and value ranges in C (MIN, MAX)

C Has a number of data-types. The actualy size of these values and thus the range veriables with various types can hold is not defined in C.
These are machine-dependent. That is they will be (probably) different on a 32 bit machine and a 64 bit machine. They can also depend on the
Operating System etc.


| name    | description |
| ------- | ----------- |
| `char`  | character - a single byte        (between -128  and 127)  |
| `int`   | integer  (16 bit, 32 bit?)         |
| `short` | short integer                      |
| `long`  | long integer                       |
| `float` |  floating point (typically 32 bit) |
| `double` | double-precision floating point   |

```c
{{#include examples/value-ranges/main.c }}
```

On my 64bit machine running Ubuntu Linux:

```
{{#include examples/value-ranges/out.txt }}
```
