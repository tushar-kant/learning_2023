#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void studentindecendingorder(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    printf("enter the number of student");
    scanf("%d", &size);

    struct Student students[size];
    studentindecendingorder(students, size);
    for (int i = 0; i < size; i++) {
        printf("student %d:\n", i + 1);
        printf("roll No: %d\n", students[i].rollno);
        printf("name: %s\n", students[i].name);
        printf("marks: %.2f\n", students[i].marks);
    }

    return 0;
}