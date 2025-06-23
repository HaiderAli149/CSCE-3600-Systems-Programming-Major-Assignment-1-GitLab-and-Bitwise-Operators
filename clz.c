// Name: Haider Beg
// EUID: mhb0098
// Count leading zeros in a binary number


#include "major1.h"

int count_leading_zeros(uint32_t n) {

    int count = 0;

    for(int i = 31; i >=0; i--)
    {
        if((n >> i) & 1) // Shift n right by i and check if the last but is 1. 
        {
            break; // Stop counting when we find the first 1
        }
        else
        {
            count++; // Increment count for each leading zero
        }
    }

    return count;

}