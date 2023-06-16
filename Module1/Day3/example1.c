#include <stdio.h>

void pattern(int n) {
    int i, j;
    
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (j = 1; j <= (n - i) * 2; j++) {
            printf(" ");
        }
        
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
