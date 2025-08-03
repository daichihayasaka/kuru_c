#include <stdio.h>

int main(void)
{
  int year, isOlympicYear;

  scanf("%d", &year);

  isOlympicYear = year % 4 == 0;

  if (isOlympicYear)
  {
    printf("今年はオリンピックの年です\n");
  }
  else
  {
    printf("今年はオリンピックの年ではありません\n");
  }

  return 0;
}
