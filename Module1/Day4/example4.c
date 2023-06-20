#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n, i;
    printf("enter the no of students");
    scanf("%d", &n);
    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("failed to allocate");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nenter details for student %d\n", i + 1);

        printf("enter name ");
        scanf("%s", students[i].name);

        printf("enter age ");
        scanf("%d", &students[i].age);

        printf("enter marks ");
        scanf("%f", &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        printf("\ndetails for student %d:\n", i + 1);
        printf("name: %s\n", students[i].name);
        printf("age: %d\n", students[i].age);
        printf("marks: %.2f\n", students[i].marks);
    }
    free(students);
    return 0;
}
