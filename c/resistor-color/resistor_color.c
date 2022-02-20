#include "resistor_color.h"

int color_arr [10] = {0};

int color_code(resistor_band_t color) {
  return (int) color;
}

int* colors() {
  for (int i = BLACK; i <= NULLISH; i++) {
    color_arr[i] = i;
  }
  return &color_arr[0];
}
