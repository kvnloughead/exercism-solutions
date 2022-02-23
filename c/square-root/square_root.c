#include <stdint.h>
#include "square_root.h"

uint16_t square_root(uint16_t n) {
  float guess = n/2.0;
  float root;
  while ((uint16_t) ((root * root) != n)) {
    root = 0.5 * (guess + (n / guess));
    guess = root;
  }
  return root;
}
