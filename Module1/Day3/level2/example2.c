#include <stdio.h>
#define decimaltoBCD(num) (((num / 10) << 4) | (num % 10))

void decimalToBCD(int decimal, int *bcdhigh, int *bcdlow)
{
   *bcdhigh = decimaltoBCD(decimal / 100);
   *bcdlow = decimaltoBCD(decimal % 100);
}

int main()
{
   int decimalNumber;
   printf("Enter a decimal number: ");
   scanf("%d", &decimalNumber);

   int bcdhigh, bcdlow;
   decimalToBCD(decimalNumber, &bcdhigh, &bcdlow);
   printf("decimal %d\n", decimalNumber,);
   printf("BCD high: %02X\nBCD low: %02X\n", bcdhigh, bcdlow);
   

   return 0;
}