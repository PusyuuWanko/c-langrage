#include <stdio.h>

/*
配列とは、大量の変数を大量に扱えるからです。

配列とビルディング
型名　配列名　［要素数］；
要素数だけ、型名で決められたスペースが確保される。
上記の内容は言葉ではわかりにくいですが
ビルディングを想像しながら考えることで分かりやすくすることができる。

宣言と代入を別々に行う
int array ［10］;int型のメモリースペースを１０個確保
array ［5］ = 代入する値；スペースの６番目に値を代入

メモリーを指定して値を決めていない個所を出力すると０となります。
メモリーをしてしたいない値を出力するとエラーになる。

宣言と代入を同時に行う

例は以下の通り↓。
型名　配列名　[要素数]　＝　｛０番目の値, 1番目の値, ２番目の値, ...｝；


要素数を省略
データ型　配列名［］＝｛1番目の値, ２番目の値, ...｝；

配列とforでprinfを複数回書かずに済むようにする。

sizeof演算子の使い方↓
※（）は使わなくても機能する。
sizeof (変数や配列名)
*/

int main (void) {
  int hairetu [10];
  hairetu [5] = 15;
  printf("%d\n", hairetu[5]);

  int array [5] = {12,13,14};
  printf("%d\n", array[0]);
  printf("%d\n", array[1]);
  printf("%d\n", array[2]);
  printf("%d\n", array[3]);
  printf("%d\n", array[4]);

  int syouryaku [] = {12,13,14};
  int i;
  for(i=0; i<5; i++) {
    printf("%dbannmeno:%ddesu\n",i,syouryaku[i]);
  }

  int ssyouryaku [] = {12,13,14};
  int in;
  for(i=0; in< sizeof ssyouryaku / sizeof(ssyouryaku[0]); in++) {
    printf("%dbannmeno:%ddesu\n",i,ssyouryaku[i]);
  }

  return 0;
}