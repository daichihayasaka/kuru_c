// 問題1
// else

// 問題2
// if-else 文

// 問題3
// switch 文

// 問題4
// ある年が、夏のオリンピック開催年なのか、冬のオリンピック開催年なのか、開催しない年なのかを表示するためのプログラム

// 問題5
#include <stdio.h>

int main()
{
  int month_west;

  // scanf("西暦の月を入力しておくれ：%d", &month_west);
  printf("西暦の月を入力しておくれ\n");
  scanf("%d", &month_west);

  switch (month_west)
  {
  case 1:
  {
    printf("睦月\n");
    break;
  }
  case 2:
  {
    printf("如月\n");
    break;
  }
  case 3:
  {
    printf("弥生\n");
    break;
  }
  case 4:
  {
    printf("卯月\n");
    break;
  }
  case 5:
  {
    printf("皐月\n");
    break;
  }
  case 6:
  {
    printf("水無月\n");
    break;
  }
  case 7:
  {
    printf("文月\n");
    break;
  }
  case 8:
  {
    printf("葉月\n");
    break;
  }
  case 9:
  {
    printf("長月\n");
    break;
  }
  case 10:
  {
    printf("神奈月\n");
    break;
  }
  case 11:
  {
    printf("霜月\n");
    break;
  }
  case 12:
  {
    printf("師走\n");
    break;
  }
  default:
  {
    printf("そんな月はないで\n");
    break;
  }
  }

  return 0;
}

// 問題6
// 無駄な処理を実行しないため
// 同じ条件の時
