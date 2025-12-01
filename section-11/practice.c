/* 問題1 */
// プロトタイプ宣言

/* 問題2 */
// 仮引数

/* 問題3 */
// 実引数

/* 問題4 */
// 返り値

/* 問題5 */
// 引数として与えられた底辺、高さから、三角形の面積を計算し、計算結果を返り値として返却する

/* 問題6 */
#include <stdio.h>

int year;
int calcOlympicYear(int);

int main(void)
{
  scanf("%d", &year);
  int result = calcOlympicYear(year);

  if (result == 0)
  {
    printf("最初のオリンピックが未開催です");
  }
  else if (result == 1)
  {
    printf("夏季オリンピックの開催年です");
  }
  else if (result == 2)
  {
    printf("冬季オリンピック開催年です");
  }
  else
  {
    printf("この年はオリンピックは開催されません");
  }

  return 0;
}

int calcOlympicYear(int year)
{

  if (year < 2000)
  {
    return 0;
  }
  else if (year % 4 == 0)
  {
    return 1;
  }
  else if (year % 2 == 0)
  {
    return 2;
  }
  else
  {
    return -1;
  }
}

/* 問題7 */
// プログラムの保守性を上げるため