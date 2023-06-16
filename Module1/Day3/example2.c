#include <stdio.h>
int bitprint(int num) {
    int i;
    int mk = 1 << 31; 
    
    for (i = 0; i < 32; i++) {
        if (num & mk) {
            printf("1");
        } else {
            printf("0");
        }

        mk >>= 1;
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("enter");
    scanf("%d", &num);
    
    printf("bits");
    bitprint(num);
    return 0;
}
