# Out of range index

Here we create an array but then try to access values that are beyond the highest index.

The compilation works, but then the code crashes.


{{#include examples/out-of-range-index/array.c }}

```
*** stack smashing detected ***: terminated
Aborted (core dumped)
```
