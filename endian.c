#include "major.h"
#include <stdint.h>

uint32_t endian_swap(uint32 n) {
  return ((n >> 24) & 0x000000FF) | // Moves B3 (MSB) to B0 (LSB)
         ((n >> 8) & 0x0000FF00) | // Moves B2 to B1
         ((n << 8) & 0x00FF0000) | // Moves B1 to B2
         ((n << 24) & 0xFF000000); // Moves B0 (LSB) to B3 (MSB)
  }

