#include <stdio.h>

int main(void)
{
  float fixed_price;

  printf("定価を入力してください: ");
  scanf("%f", &fixed_price);

  printf("%f\n", fixed_price);
  printf("1割引後: %f\n", fixed_price * 0.9);
  printf("3割引後: %f\n", fixed_price * 0.7);
  printf("5割引後: %f\n", fixed_price * 0.5);
  printf("8割引後: %f\n", fixed_price * 0.2);

  return 0;
}
