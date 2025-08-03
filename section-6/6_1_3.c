#include <stdio.h>

// scanf("入力変換指定子", &変数名);
int main(void)
{
  int data1;
  scanf("%d", &data1);
  printf("%d\n", data1);

  double data2;
  scanf("%lf", &data2); // 実数の場合 %lf のように l が付くのに注意
  printf("%f\n", data2);

  float data3;
  scanf("%lf", data3);
  printf("%f\n", data3); // zsh: segmentation fault  ./6_1_3

  return 0;
}
