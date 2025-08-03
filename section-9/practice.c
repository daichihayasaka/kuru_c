/* 問題 1 */
// カウント変数

/* 問題 2 */
// 無限ループ

/* 問題 3 */
// #include <stdio.h>

// int main(void)
// {
//   int i, price;

//   scanf("%d", &price);

//   for (i = 1; i <= 9; i++)
//   {
//     printf("%d Percent Off = %d\n", i * 10, (int)(price * ((10.0 - i) / 10)));
//   }

//   return 0
// }

// 入力した金額の 10〜90% OFF 後の価格を計算・表示するプログラム

/* 問題4 */
#include <stdio.h>

int main(void)
{
  int i;
  int j;

  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%2d x %2d = %2d\n", i, j, i * j);
    }
  }

  return 0;
}

/* 問題5 */
// カウント変数を初期化し、指定した条件を満たす限り処理を繰り返し、指定した更新処理によりカウント変数を更新する
