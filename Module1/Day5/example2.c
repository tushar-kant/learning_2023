#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} complexnumber;

void readcomplexnumber(complexnumber *c) {
    printf("enter real part ");
    scanf("%f", &(c->real));
    printf("enter imaginary part ");
    scanf("%f", &(c->imaginary));
}

void writecomplexnumber(complexnumber c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}
complexnumber addcomplexnumbers(complexnumber c1, complexnumber c2) {
    complexnumber result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
complexnumber multiplycomplexnumbers(complexnumber c1, complexnumber c2) {
    complexnumber result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}

int main() {
    complexnumber num1, num2, sum, mul;
    printf("enter 1st complex no\n");
    readcomplexnumber(&num1);

    printf("enter 2nd complex no\n");
    readcomplexnumber(&num2);

    printf("\n");
    printf("1st complex no");
    writecomplexnumber(num1);

    printf("2nd complex no");
    writecomplexnumber(num2);

    sum = addcomplexnumbers(num1, num2);
    printf("sum of the complex numbers: ");
    writecomplexnumber(sum);

    mul = multiplycomplexnumbers(num1, num2);
    printf("product of the complex numbers: ");
    writecomplexnumber(mul);

    return 0;
}
