#include <stdio.h>
int main (void) {
  int no;
  scanf("%d", &no);
/*
場合分けが簡単にスイッチによりケースにより簡単に
実装ができるがif、elseと異なり変数や関数を大小関係などを分けるような厳しい判断が不得意だそうです。
*/
  switch (no) {
  case 1:
    printf("frog1");
    break;
  case 2:
    printf("frog2");
    break;
  case 3:
    printf("frog3");
    break;
  case 4:
    printf("frog4");
    break;
  case 5:
    printf("frog5");
    break;
  case 6:
    printf("frog6");
    break;
  case 7:
    printf("frog7");
    break;
  case 8:
    printf("frog8");
    break;
  case 9:
    printf("frog9");
    break;
  case 10:
    printf("frog10");
    break;
  default:
    printf("tadasiibanngougahitutyoudesu");
    break;
  }
return 0;
}