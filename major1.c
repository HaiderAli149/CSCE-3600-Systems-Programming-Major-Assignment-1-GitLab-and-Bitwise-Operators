#include <stdio.h>
#include <stdint.h>
#include "major1.h"

int main() {

    int option;
    int rotate_amount; 
    scanf("%d", &option);
    uint32_t number;

    while (1) {
    printf("Enter the menu option for the operation to perform:\n");
    printf("(1) Count Leading Zeros\n");
    printf("(2) Endian Swap\n");
    printf("(3) Rotate-right\n");
    printf("(4) Parity\n");
    printf("(5) Exit\n");
    printf("--> ");
    scanf("%d", &option);

    // Validate the option input
    if (option < 1 || option > 5) 
    {
        printf("Error: Invalid option. Please try again.\n");
        return 1;
    }
    // Exit the program if the user selects option 5
    if (option == 5) {
        printf("Program terminating. Goodbye...\n");
        break;
    }

    // Validate the number input
    do {
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%u", &number);
    } while (number < 1 || number > 4294967295);

    // Validate the rotate amount input
    if (option == 3) {
        do {
            printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
            scanf("%d", &rotate_amount);
        } while (rotate_amount < 0 || rotate_amount > 31);
    }

    // Ensure the number is within the valid range for a 32-bit
    switch (option) {
        case 1:
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%u", &number);
            printf("The number of leading zeroes in %u is %d\n", number, count_leading_zeros(number));
            break;
        case 2:
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%u", &number);
            printf("Endian swap of %u gives %d\n",number, endian_swap(number));
            break;
        case 3:
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively):");
            printf("%u rotated by %d position gives us %u\n", number, rotate_amount, rotate(number, rotate_amount));
            break;
        case 4:
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%u", &number);
            printf("Parity of %u is %d\n",number, parity(number));
            break;
        default:
            printf("Error: Invalid option. Please try again.\n");
        
    }
    
    }
    return 0;
}