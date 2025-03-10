#include<stdio.h>

void increment(int counter[], int ix) {
    ++counter[ix];
}

void print_array(int counter[]) {
    for (int i = 0; i < 4; i++) {
        printf("%d %d\n", i, counter[i]);
    }
    printf("--------\n");
}

int main() {
    int numbers[4] = {0, 0, 0, 0};
    print_array(numbers);
    increment(numbers, 2);
    increment(numbers, 2);
    increment(numbers, 3);
    print_array(numbers);
    return 0;
}