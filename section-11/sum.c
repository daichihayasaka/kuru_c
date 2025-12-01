#include <stdio.h>

/*
  プロトタイプ宣言:

  コンパイラに関数を認識させる
  → main の後に関数を定義できるようになる

  唯一 main 関数だけはプロトタイプ宣言が不要
*/
int sum(void);

int main(void)
{
  sum();
  return 0;
}

int sum(void)
{
  printf("%d\n", (1 + 100) * 100 / 2);
  return 0;
}