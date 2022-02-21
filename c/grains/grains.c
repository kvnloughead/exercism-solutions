#include <math.h>
#include <stdio.h>
#include "grains.h"

const uint8_t SQUARE_MIN = 1;
const uint8_t SQUARE_MAX = 64;

uint64_t square(uint8_t index) {
  if (SQUARE_MIN > index || SQUARE_MAX < index) {
    return 0;
  }
  return (uint64_t) 1 << (index - 1);
}

uint64_t total(void) {
  return (uint64_t)-1;
}
