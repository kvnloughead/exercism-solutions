#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum RESISTOR_BAND {
  BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE, NULLISH
} resistor_band_t;

int color_code(resistor_band_t color);
int* colors(void);

#endif
