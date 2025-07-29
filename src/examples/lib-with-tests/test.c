#include<stdio.h>
#include<assert.h>
#include "mymath.h"

int main() {
    int result;
    result = add(1, 1);

    assert(2 == result);
    assert(4 == multiply(2, 2));
    assert(6 == multiply(2, 3));

    return 0;
}
