#include <stdio.h>

// return 0 なくても動く...
int main(void)
{
  printf("%f\n", 1.03 * 9);          // 9.270000
  printf("%d\n", 1.03 * 9);          // 73896 // バグってる
  printf("%f\n", 1.05 * 360);        // 378.000000
  printf("%d\n", 1.05 * 360);        // 73896 // バグってる
  printf("%d\n", (int)(1.05 * 360)); // 378
}
