#include<stdio.h>
#include<limits.h>

int main() {
    int num;

    num = INT_MAX;
    printf("%i\n", num);

    num++;
    printf("%i\n", num);
    
    return 0;
}