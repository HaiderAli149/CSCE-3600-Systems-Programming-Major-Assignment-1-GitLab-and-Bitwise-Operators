#include  "major1.h"
#include <stdio.h>

// function to print 32-bit binary representation
void printBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // Add space to each bit
    }
}

void rotateRight(unsigned int num, unsigned int rotateBits) {
    // Perform rotation
    unsigned int rotated = (num >> rotateBits) | (num << (32 - rotateBits));
    
    // Print input and output in binary and decimal
    printf("\nInput:  %10u (Binary: ", num);
    printBinary(num);
    printf(")\n");
    
    printf("Output: %10u (Binary: ", rotated);
    printBinary(rotated);
    printf(")\n");
    
    printf("%u rotated right by %u gives: %u\n", num, rotateBits, rotated);
}