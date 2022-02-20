#include <math.h>
#include <stdio.h>
#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
  int digit, sum;
  int numDigits = log10(candidate) + 1;
  sum = 0;

  for (int i = 0; i < numDigits; i++) {
    digit = (candidate / (int) pow(10, i)) % 10;
    sum += (int) pow(digit, numDigits);
  }

  return sum == candidate;
}

