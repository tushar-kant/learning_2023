#include <stdio.h>
int largenum(int num) {
    int l = 0;
    int d = 1;
    int digit;
    while (d <= num) {
        digit = (num / d / 10) * d + (num % d);
        if (digit > l) {
            l = digit;
        }
        d *= 10;
    }
    return l;
}

int main() {
    int num;
    printf("enter a 4digit num");
    scanf("%d", &num);

    int largeno = largenum(num);
    printf("the large num by deleting a single digit%d\n", largeno);

    return 0;
}
