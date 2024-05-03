#include <stdio.h>

#ifdef IN_JAPAN
#define MAX (9)
#else
#define MAX (12)
#endif

int main(void)
{
  int kk;
  for (kk = 0; kk < MAX * MAX; ++kk)
  {
    printf("%3d%c", (1 + kk / MAX) * (1 + kk % MAX),
           ' ' + kk % MAX / (MAX - 1) * ('\n' - ' '));
  }
  return 0;
}

// end of file