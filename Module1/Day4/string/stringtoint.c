#include <stdio.h>

int strtoint(char *str) {
  int num = 0;
  int i = 0;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] < '0' || str[i] > '9') {
      return -1;
    }
  }

  for (i = 0; str[i] != '\0'; i++) {
    num = num * 10 + (str[i] - '0');
  }

  return num;
}

int main() {
  char str[100];
  int num;

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  num = strtoint(str);

  if (num == -1) {
    printf("the string is not a valid number.\n");
  } else {
    printf("the integer is: %d\n", num);
  }

  return 0;
}