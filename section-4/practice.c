#include <stdio.h>

void q_7(void)
{
  printf("%d / %d = %d ... %d \n", 40, 13, 40 / 13, 40 % 13); // 40 / 13 = 3 ... 1
}

int main(void)
{
  printf("%d\n", 20 / 7);     // 2
  printf("%f\n", 20.0 / 7.0); // 2.857143

  printf("%d\n", 0x5D);
  printf("%d\n", 023);
  printf("%d\n", 0x5D + 023 * 3);

  q_7();

  return 0;
}
