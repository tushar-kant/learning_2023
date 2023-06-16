#include <stdio.h>
int pattern1(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void pattern2(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = 1; i <= (n - 1) * 2; i++) {
        printf(" ");
    }
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void pattern3(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = 1; i <= n * 2 - 2; i++) {
        printf(" ");
    }
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}



int main() {
    int n;
    int i, j;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        pattern1(i);
        if (i != 1) {
            pattern2(i);
        }
        for (j = i - 1; j >= 1; j--) {
            pattern3(i);
        }
        if (i != 1) {
            printf("\n");
        }
    }
    return 0;
}
