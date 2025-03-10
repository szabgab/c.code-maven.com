#include<stdio.h>

void increment(int *x) {
  *x = *x + 1;
}


int main() {
    int counter = 0;

    printf("Counter: %d\n", counter);

    increment(&counter);
    printf("Counter: %d\n", counter);

    increment(&counter);
    printf("Counter: %d\n", counter);

    return 0;
}