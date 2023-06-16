#include <stdio.h>
int finddigit(int n, int values[]) {
    int i, num, d;
    int s = 9, l = 0;

    for (i = 0; i < n; i++) {
        num = values[i];

        while (num > 0) {
            d = num % 10;
            if (d < s)
                s = d;
            if (d > l)
                l = d;
            num /= 10;
        }
    }

    printf("small %d\n", s);
    printf("large%d\n", l);
}

int main() {
    int n, i;
    printf("enter the number of values ");
    scanf("%d", &n);
    int values[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    finddigit(n, values);

    return 0;
}
