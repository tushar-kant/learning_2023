#include <stdio.h>

// Function to compute the total sec
int computetotalsec(int hrs, int min, int sec) {
  int totalsec = hrs * 3600 + min * 60 + sec;
  return totalsec;
}

int main() {
  int hrs, min, sec;

  printf("enter the hrs: ");
  scanf("%d", &hrs);
  printf("enter the min: ");
  scanf("%d", &min);
  printf("enter the sec: ");
  scanf("%d", &sec);

  int totalsec = computetotalsec(hrs, min, sec);

  printf("the total number of sec is: %d\n", totalsec);

  return 0;
}