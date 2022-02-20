#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) {
  if (phrase == NULL)
    return false;
  char ch;
  for (int i = 0; i < (int) strlen(phrase); i++) {
    ch = tolower(phrase[i]);
    if (ch == '-' || ch == ' ')
      continue;
    else {
      for (int j = i + 1; j < (int) strlen(phrase); j++) {
        if (ch == tolower(phrase[j]))
          return false;
      }
    }
  }
  return true;
}
