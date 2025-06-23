// Oyindamola Bade-Ojo
// EUID: omb0035
// CSCE 3600 - Major Assignment 1

#include <stdio.h>

// Function that checks parity using bitwise operations
int parity(unsigned int num) {
    int ones = 0;

    while (num > 0) {
        if (num & 1) {
            ones++;  // count the 1s
        }
        num = num >> 1;  // shift right
    }

    if (ones % 2 == 0) {
        return 0;  // even number of 1s
    } else {
        return 1;  // odd number of 1s
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit unsigned number: ");
    scanf("%u", &num);

    int result = parity(num);
    printf("Parity of %u is: %d\n", num, result);

    return 0;
}
