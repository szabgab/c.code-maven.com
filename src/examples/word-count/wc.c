#include<stdio.h>

int main() {
    int chars, words, lines = 0;
    char c;
    int in_word = 0;
    while((c = getchar()) != EOF) {
        // printf("%c", c);
        chars++;
        if (c == '\n') {
            lines++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    printf("Lines: %d\nWords: %d\nChars: %d\n", lines, words, chars);

    return 0;
}