#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void studenttosearchbyname(const struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("student found\n");
            printf("roll No %d\n", students[i].rollno);
            printf("name %s\n", students[i].name);
            printf("marks %f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    else {
        printf("student not found\n");
    }
}

int main() {
    int size;
    printf("enter the number of students");
    scanf("%d", &size);
    struct Student students[size];
    char nametosearch[20];
    printf("name of the student to search");
    scanf("%s", nametosearch);
    studenttosearchbyname(students, size, nametosearch);
    return 0;
}