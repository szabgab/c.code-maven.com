#include<stdio.h>

int is_palindrome(char str[], int length);
int is_palindrome_recursive(char str[], int length);
int readline(char str[], int maxLength);


#define MAX_LENGTH 10

int main() {

    char str[MAX_LENGTH];
    int actualLength;

    actualLength = readline(str, MAX_LENGTH);
    if (actualLength == -1) {
        printf("Input too long\n");
        return 1;
    }
    printf("Input: %d %s\n", actualLength, str);
    is_palindrome_recursive(str, actualLength) ? printf("Palindrome\n") : printf("Not a palindrome\n");
    is_palindrome(str, actualLength) ? printf("Palindrome\n") : printf("Not a palindrome\n");

    return 0;
}

int readline(char str[], int maxLength) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i <= maxLength) {
        if (i == maxLength)
            return -1;

        str[i] = c;
        i++;
    }

    str[i] = '\0';
    return i;
}

int is_palindrome(char str[], int length) {
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}


int is_palindrome_recursive(char str[], int length) {
    if (length <= 1)
        return 1;

    if (str[0] != str[length - 1])
        return 0;

    return is_palindrome_recursive(str + 1, length - 2);
}