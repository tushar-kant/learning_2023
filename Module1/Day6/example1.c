#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    int size;
    printf("enter the number of student ");
    scanf("%d", &size);
    getchar(); 

    struct Student* students = malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        printf("student %d\n", i + 1);
        printf("roll No ");
        scanf("%d", &(students[i].rollno));
        getchar();

        printf("name ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("marks ");
        scanf("%f", &(students[i].marks));
        getchar(); 

    }

    for (int i = 0; i < size; i++) {
        printf("student %d\n", i + 1);
        printf("roll No %d\n", students[i].rollno);
        printf("name %s\n", students[i].name);
        printf("marks %.2f\n", students[i].marks);

    }
    free(students);

    return 0;
}
