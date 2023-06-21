#include <stdio.h>

void togglecase(char *str) {
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  togglecase(str);

  printf("The toggled string is: %s\n", str);

  return 0;
}