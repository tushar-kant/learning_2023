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
            printf("invalid \n");
            return num;  
    }
    return num;
}
int main() {
    int num, type;
    printf("enter the num");
    scanf("%d", &num);
    printf("operation 1,2,or3");
    scanf("%d", &type);
    int result = bit_operations(num, type);
    printf("result%d\n", result);
    return 0;
}
