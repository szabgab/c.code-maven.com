#include<stdio.h>


int main() {
    long count = 0;

    while (getchar() != EOF)
        count++;

    printf("Number of characters: %ld\n", count);

    return 0;
}
