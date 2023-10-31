/*
#include<stdio.h>
int main(void) {
  int tyesr;
  int today;
  int day;
  int month;
  int year;
  printf("input the this year: ");
  scanf(tyear);
  printf("input the today: ");
  scanf(today);
  printf("input the day: ");
  scanf(day);
    printf("input the month: ");
  scanf(month);
    printf("input the year: ");
  scanf(year);
  if (day < today) {
    printf("%d your tosi: ", tyear - year);
  } else {
    printf("%d your tosi: "), tyear - year -1;
  }
}

思ったよりミス↑がありました。修正後はこちら↓。
*/
#include<stdio.h>
int main(void) {
  int Tyear;
  int Tmonth;
  int Tday;
  int Bday;
  int Bmonth;
  int Byear;
  printf("input the this year: ");
  scanf("%d", &Tyear);
  printf("input the current month: ");
  scanf("%d", &Tmonth);
  printf("input the today: ");
  scanf("%d", &Tday);
  printf("input the day: ");
  scanf("%d", &Bday);
    printf("input the month: ");
  scanf("%d", &Bmonth);
    printf("input the year: ");
  scanf("%d", &Byear);
  if (Tmonth > Bmonth) {
    if (Bday < Tday) {
      printf("%dyour tosi: ", Tyear - Byear);
    } else {
      printf("%dyour tosi: ", Tyear - Byear - 1);
    }
  } else {
    printf("%dyour tosi: ", Tyear - Byear - 1);
  }
}
