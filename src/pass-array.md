# Pass an array

When we pass an array to a function we pass it by reference. We don't declare the size of array in the function signature, but the function also cannot determine it itself. So here we hard-coded it.

{% emebed include file="src/examples/call-by-ref/call.c" %}


{% embed include file="src/examples/call-by-ref/out.txt" %}
