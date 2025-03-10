#include <stdio.h>
#include <limits.h>


int main() {
    printf("INT_MIN  %12d\n", CHAR_MIN);
    printf("INT_MIN  %12d\n", CHAR_MAX);

    printf("INT_MIN  %12d\n", SHRT_MIN);
    printf("INT_MAX  %12d\n", SHRT_MAX);

    printf("INT_MIN  %12d\n", INT_MIN);
    printf("INT_MAX  %12d\n", INT_MAX);

    // printf("UINT_MIN %d", UINT_MIN); // It would be 0    
    printf("UINT_MAX %12u\n", UINT_MAX);
    // Note: using %d it would print -1
}