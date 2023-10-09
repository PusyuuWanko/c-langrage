#include <iostream>
#include <stdio.h>
using namespace std;//std記述の省略

int main() {
  std::cout << "tset" << std::endl;
  printf("printf function");//ぷりんとF で出力
  char a;
  cout << "one string: ";
  std::cin >> a;//入力
  std::cout << a << std::endl;//出力COUTはprintfより様々な場面で関数を切り替えずに使用が可能。

  cout << "tannsyuku";
  return 0;
}