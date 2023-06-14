#include <stdio.h>

int biggestnum(int num1, int num2) {

    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int biggestnumTernary(int num1, int num2) {
  
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int biggest = biggestnum(num1, num2);
    printf("if-else%d\n", biggest);

    int biggestTernary = biggestnumTernary(num1, num2);
    printf("ternary operator %d\n", biggestTernary);

    return 0;
}
