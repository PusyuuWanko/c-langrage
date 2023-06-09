#include <stdio.h>
int main (void) {
  int suuti;
  scanf("%d", &suuti);
/*
ブロック文の例
  if (suuti == 10) {
条件式が一つで済むというメリットがある
    printf("10to onazi\n");
    printf("kannryou");
  }

elseを使うことでifで当てはまらなかったすべてを条件にすることができる
  if (suuti == 10)
    printf("onazi");
  else
    printf("tigau");
条件の場合分け↓
1. if
2. else if
3. else
という順番に処理することができる。
*/
  if (suuti == 10) {
    printf("onazi");
  } else if (suuti == 20) {
    printf("osii");
  } else {
    printf("tigau");
  }
  return 0;
}