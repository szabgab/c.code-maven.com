#include<stdio.h>


int main() {
    int count[10];
    char c;
    int i;

    for (i=0; i<=9; i++)
        count[i] = 0;


    while ((c = getchar()) != EOF)
        if ('0' <= c && c <= '9')
            count[c-'0']++;

    
    for (i=0; i<=9; i++)
        printf("Number of %d digits: %d\n", i, count[i]);

    return 0;
}
