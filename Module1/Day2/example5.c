#include <stdio.h>

int countsetbits(unsigned int x) {

  int count = 0;
  while (x > 0) {

    if (x & 1) {
      count++;
    }
    x >>= 1;
  }
  return count;
}
int main() {

  unsigned int a[] = {0x1, 0xF4, 0x10001};

  int totalcount = 0;

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {

    int count = countsetbits(a[i]);

    totalcount += count;
  }

  printf("the total no of set bits %d\n", totalcount);
  return 0;
}