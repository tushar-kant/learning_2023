#include <stdio.h>

void swap(void *a, void *b) {
  int *ptra = (int *)a;
  int *ptrb = (int *)b;
  int temp = *ptra;
  *ptra = *ptrb;
  *ptrb = temp;
}

int main() {

  int x = 10;
  double y = 20.0;

  swap(&x, &y);

  printf("x = %d\n", x);
  printf("y = %lf\n", y);

  return 0;
}