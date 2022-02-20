#include "resistor_color.h"

resistor_band_t color_arr [10] = {0};

int color_code(resistor_band_t color) {
  return (int) color;
}

resistor_band_t* colors() {
  for (int i = 1; i <= 10; i++) {
    switch(i) {
      case 0   : color_arr[i] = BLACK; break;
      case 1   : color_arr[i] = BROWN; break;
      case 2   : color_arr[i] = RED; break;
      case 3   : color_arr[i] = ORANGE; break;
      case 4   : color_arr[i] = YELLOW; break;
      case 5   : color_arr[i] = GREEN; break;
      case 6   : color_arr[i] = BLUE; break;
      case 7   : color_arr[i] = VIOLET; break;
      case 8   : color_arr[i] = GREY; break;
      case 9   : color_arr[i] = WHITE; break;
    }
  }
  return &color_arr[0];
}
