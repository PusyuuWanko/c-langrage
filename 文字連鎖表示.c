#include <stdio.h>
#include <locale.h>

int main (void) {
  setlocale(LC_ALL, "ja_JP.UTF-8");

  char character;
  int count;

  printf("表示したい文字を一つだけ入力してください：");
  scanf("%c", &character);

  printf("文字の表示回数を入力してください：");
  scanf("%d", &count);

  for (int i = 0; i < count; i++) {
    printf("%c", character);
  }

  printf("\n");

  printf("プログラムを終了します。何かキーを押してください...\n");
  getchar();

  return 0;
}