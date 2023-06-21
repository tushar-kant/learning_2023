#include <stdio.h>

int sumofeven_elements(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; i += 2) {
    sum += array[i];
  }
  return sum;
}

int sumofodd_elements(int *array, int size) {
  int sum = 0;
  for (int i = 1; i < size; i += 2) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
  int size = sizeof(array) / sizeof(int);
  int sumofeven = sumofeven_elements(array, size);
  int sumofodd = sumofodd_elements(array, size);
  int difference = sumofeven - sumofodd;

  printf("difference between even and odd indexed elements: %d\n", difference);
  
  return 0;
}