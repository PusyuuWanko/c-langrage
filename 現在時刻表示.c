#include <stdio.h>
#include <time.h>
int main (void) {
  time_t currentTime;
  struct tm *localTime;

  currentTime = time(NULL);
  localTime = localtime(&currentTime);

  printf("Current time: %02d:%02d:%02d\n", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

  return 0;
}