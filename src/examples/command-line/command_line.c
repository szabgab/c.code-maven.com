#include <stdio.h>

int main(int argc, char **argv) {
    printf("Number of arguments including the program itself: %d\n", argc);
    printf("The program: '%s'\n", argv[0]);
    if (argc == 1) {
        printf("There are no command-line arguments.\n");
    }
    for (int ix = 1; ix < argc; ix++) {
        printf("arg: '%s'\n", argv[ix]);
    }
}
