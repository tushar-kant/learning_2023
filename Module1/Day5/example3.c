#include <stdio.h>

struct time {
  int hour;
  int min;
  int sec;
};

void timedifference(struct time t1, struct time t2, struct time *diff) {
  int hourdifference = t2.hour - t1.hour;
  int mindifference = t2.min - t1.min;
  int secdifference = t2.sec - t1.sec;

  if (secdifference < 0) {
    secdifference += 60;
    mindifference--;
  }

  if (mindifference < 0) {
    mindifference += 60;
    hourdifference--;
  }

  diff->hour = hourdifference;
  diff->min = mindifference;
  diff->sec = secdifference;
}

int main() {
  struct time t1 = {10, 30, 10};
  struct time t2 = {11, 20, 30};
  struct time diff;

  timedifference(t1, t2, &diff);
  printf("the difference  %d:%d:%d\n", diff.hour, diff.min, diff.sec);

  return 0;
}