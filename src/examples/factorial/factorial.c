#include<stdio.h>

int iterative_factorial(int n);
int recursive_factorial(int n);

int main() {
    printf("Iterative factorial of 5: %d\n", iterative_factorial(5));
    printf("Recursive factorial of 5: %d\n", recursive_factorial(5));
    return 0;
}

int iterative_factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int recursive_factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * recursive_factorial(n - 1);
    }
}