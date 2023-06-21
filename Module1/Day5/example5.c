#include <stdio.h>

struct student {
  char name[50];
  int roll;
  float marks;
};

void swapstructure(struct student *s1, struct student *s2) {
  struct student temp;
  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}

int main() {
  struct student s1 = {"tushar", 20, 50.0};
  struct student s2 = {"kanta", 30, 60.0};

  swapstructure(&s1, &s2);

  printf(" swapping\n");
  printf("s1: name = %s, roll = %d, marks = %.1f\n", s1.name, s1.roll, s1.marks);
  printf("s2: name = %s, roll = %d, marks = %.1f\n", s2.name, s2.roll, s2.marks);

  return 0;
}