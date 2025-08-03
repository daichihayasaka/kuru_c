#include <stdio.h>

int main(void)
{
  printf("%d\n", 10 + 3); // 13
  printf("%d\n", 10 - 3); // 7
  printf("%d\n", 10 * 3); // 30
  printf("%d\n", 10 / 3); // 3 (小数点以下は切り捨て)
  printf("%d\n", 10 % 3); // 1

  printf("%d\n", (1 + 100) * 100 / 2); // 5050 (1から100までの合計値)

  return 0;
}
