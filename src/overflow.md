# Overflow

There are a number of [data types](./data-types.md) in C that can hold numbers. The integer-types have a maximum and minimum value and if we increment the variable beyond the maximum value it will become the minimum possible value.
That is MAX+1 will become MIN. This is called integer overflow.

The same is true if we decrement beyond the minimal value. So MIN-1 will become MAX. This is called underflow.

Let's see a few examples with some of the [data types](./data-types.md).

## char


```c
{{#include examples/overflow-char/overflow.c }}
```

```
{{#include examples/overflow-char/out.txt }}
```

## int


```c
{{#include examples/overflow-int/overflow.c }}
```

```
{{#include examples/overflow-int/out.txt }}
```

