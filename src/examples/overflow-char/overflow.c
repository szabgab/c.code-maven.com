#include<stdio.h>


int main() {
    char c;

    c = '~';
    printf("%i %c\n", c, c);

    c++;
    printf("%i %c\n", c, c);

    c++;
    printf("%i\n", c); // This will print -128 and the character is unprintable

    return 0;
}