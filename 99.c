#include <stdio.h>

int main(void)
{
  int kk;
  for (kk = 0; kk <= 9 * 8 + 8; ++kk)
  {
    printf("%2d%c", (kk / 9 + 1) * (kk % 9 + 1),
           (1 - kk % 9 / 8) * ' ' + kk % 9 / 8 * '\n');
  }
  return 0;
}

// end of file