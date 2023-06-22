#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializestudent(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int size;
    printf("enter the number of student");
    scanf("%d", &size);

    struct Student students[size];
    initializestudent(students, size);

    for (int i = 0; i < size; i++) {
        printf("student %d\n", i + 1);
        printf("roll No %d\n", students[i].rollno);
        printf("name %s\n", students[i].name);
        printf("marks %.2f\n", students[i].marks);
    }
    return 0;
}