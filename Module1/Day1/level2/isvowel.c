#include <stdio.h>

int isVowel(char ch)
{
   switch (ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
      return 1; 
   default:
      return 0; 
   }
}

int main()
{
   char character;
   printf("enter the character");
   scanf("%c", &character);

   int result = isVowel(character);

   if (result == 1)
   {
      printf("vowel\n");
   }
   else
   {
      printf("consonant\n");
   }

   return 0;
}