#include <stdio.h>
void exponentcal(double x) {
    unsigned char* ptr = (unsigned char*)&x;
    unsigned char* bptr = ptr + sizeof(double) - 1;
    unsigned char exponentbits = (*bptr & 0x7F) << 1 | (*(bptr - 1) >> 7);
    printf("hex :0x%02X\n", exponentbits);
    printf(" binary: 0b");
    for (int i = 7; i >= 0; i--) {
        unsigned char bit = (exponentbits >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x;
    printf("double value");
    scanf("%lf", &x);
    exponentcal(x);
    return 0;
}
