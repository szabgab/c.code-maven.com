#include <stdio.h>

unsigned int count_zero_bits(unsigned int num) {
    unsigned int count = 0;
    unsigned int total_bits = sizeof(num) * 8;

    for (unsigned int i = 0; i < total_bits; i++) {
        if ((num & (1U << i)) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);
    printf("Number of zero bits in %u: %u\n", num, count_zero_bits(num));
    return 0;
}