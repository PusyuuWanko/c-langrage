#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "ja_JP.UTF-8");

  double weight, height, bmi;

  printf("体重（kg）を入力してください：");
  scanf("%lf", &weight);

  printf("身長（m）を入力してください：");
  scanf("%lf", &height);

  bmi = weight / (height * height);

  printf("BMIは %.2lf です。\n", bmi);

  printf("プログラムを終了します。何かキーを入力してください...\n");
  getchar();

  return 0;
}