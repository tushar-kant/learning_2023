#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:  
            num |= 1;  
            break;
        case 2:  
            num &= ~(1 << 31);  
            break;
        case 3:  
            num ^= (1 << 15);  
            break;
        default:
            printf("invalid operation\n");
            return num;  
    }
    return num;
}

int main() {
    int number, operationType;
    printf("enter the number");
    scanf("%d", &number);
    printf("operation 1,2,or3");
    scanf("%d", &operationType);
    int result = bit_operations(number, operationType);
    printf("result%d\n", result);
    return 0;
}
