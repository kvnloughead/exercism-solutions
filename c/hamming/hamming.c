#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
  unsigned int i = 0;
  int hamming = 0;
  for (i = 0; lhs[i] != '\0'; i++) {
    if (lhs[i] != rhs[i]) {
      hamming++;
    }
  }
  _Bool both_strings_terminated = lhs[i] == rhs[i];
  return both_strings_terminated ? hamming : -1;
}
