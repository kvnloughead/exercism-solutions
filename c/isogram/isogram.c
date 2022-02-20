#include <string.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) {
  if (phrase == NULL)
    return false;
  char found[26] = {0};
  unsigned char ch;
  for (int i = 0; phrase[i] != '\0'; i++) {
    ch = tolower(phrase[i]);
    if (ch >= 'a' && ch <= 'z') {
      if (found[ch - 'a'] > 0)
        return 0;
      found[ch - 'a'] += 1;
    }
  }
  return 1;
}
