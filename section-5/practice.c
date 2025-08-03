#include <stdio.h>

int water_price = 198;
int milk_price = 138;
double tax = 1.05;

int main(void)
{
  // 暗黙的な型変換になってるから危険
  // int と double で計算したら double になる
  // int amount = (water_price + (milk_price * 2)) * tax;
  int amount = (int)(water_price + (milk_price * 2)) * tax;

  int change = 1000 - amount;
  printf("%d\n", change);

  return 0;
}
