#include <stdio.h>

#ifdef IN_JAPAN
#define MAX (9)
#define FMTD "%2d"
#else
#define MAX (12)
#define FMTD "%3d"
#endif

int main(void)
{
  int kk;
  for (kk = 0; kk < MAX * MAX; ++kk)
  {
    printf(FMTD "%c", (1 + kk / MAX) * (1 + kk % MAX),
           ' ' + kk % MAX / (MAX - 1) * ('\n' - ' '));
  }
  return 0;
}

// end of file