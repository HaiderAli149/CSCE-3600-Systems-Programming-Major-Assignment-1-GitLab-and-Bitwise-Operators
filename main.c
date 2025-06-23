#include "major1.h"

int main() {
    unsigned int num, rotateBits;

    //rotation menu
    printf("Enter a 32-bit number (>= 1 and <= 4294967295): ");
    scanf("%u", &num);

    printf("Enter positions to rotate (0-31): ");
    scanf("%u", &rotateBits);

    // Call rotateRight 
    rotateRight(num, rotateBits);

    return 0;
}