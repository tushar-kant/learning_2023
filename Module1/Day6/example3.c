#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displaystudent(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("student %d\n", i + 1);
        printf("roll no %d\n", students[i].rollno);
        printf("name %s\n", students[i].name);
        printf("marks %.2f\n", students[i].marks);
    }
}

int main() {
    int size;
    printf("enter the number of student");
    scanf("%d", &size);

    struct Student students[size];

    displaystudent(students, size);

    return 0;
}