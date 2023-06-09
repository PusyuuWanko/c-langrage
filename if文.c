#include <stdio.h>
int main (void) {
  int suuti;
  scanf("%d", &suuti);
/*
int suuti = 10;に対してifするとどうなるのか↓
デフォルト0か1かで機能する↓
  if (suuti)
10と同じの時のみ機能する↓
  if (suuti == 10)
10と異なるの時のみ機能する↓
  if (suuti != 10)
大なり小なりを使用してifを指定
  if (suuti < 10)
か
  if (suuti > 10)
を使用することで大きいか小さいかで判定が可能になる。

/*
　　5と１０の間の時のみ実行
  if (suuti >= 5 && suuti <= 10())
＆＆はどちらも正しい時のみ
｜｜はどちらか片方が正しい時のみ
！は条件を反転
*/
  if (suuti == 10)
  printf("iLike Frog");
  return 0;
}