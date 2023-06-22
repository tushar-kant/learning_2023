#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void converttoupper(FILE *source, FILE *destination)
{
   int c;
   while ((c = fgetc(source)) != EOF)
   {
      fputc(toupper(c), destination);
   }
}
void converttolower(FILE *source, FILE *destination)
{
   int c;
   while ((c = fgetc(source)) != EOF)
   {
      fputc(tolower(c), destination);
   }
}

void converttosentencecase(FILE *source, FILE *destination)
{
   int c;
   int sentenceStart = 1; 

   while ((c = fgetc(source)) != EOF)
   {
      if (sentenceStart && isalpha(c))
      {
         fputc(toupper(c), destination); 
         sentenceStart = 0;
      }
      else
      {
         fputc(tolower(c), destination); 
         if (c == '.' || c == '!' || c == '?')
            sentenceStart = 1;
      }
   }
}

int main(int argc, char *argv[])
{
   FILE *sourceFile, *destinationFile;
   int option = 0; 

   if (argc < 3)
   {
      printf("insufficient arguments\n");
      return 1;
   }

   if (argc > 3)
   {
      option = argv[1][1];        
      sourceFile = fopen(argv[2], "r");      
      destinationFile = fopen(argv[3], "w"); 
   }
   else
   {
      sourceFile = fopen(argv[1], "r");
      destinationFile = fopen(argv[2], "w");
   }

   if (sourceFile == NULL || destinationFile == NULL)
   {
      printf("Failed to open files.\n");
      return 1;
   }

   switch (option)
   {
   case 'u':
      converttoupper(sourceFile, destinationFile);
      break;
   case 'l':
      converttolower(sourceFile, destinationFile); 
      break;
   case 's':
      converttosentencecase(sourceFile, destinationFile); 
      break;
   default:
      int c;
      while ((c = fgetc(sourceFile)) != EOF)
      {
         fputc(c, destinationFile);
      }
   }

   fclose(sourceFile);
   fclose(destinationFile);
   printf("file copied\n");

   return 0;
}
