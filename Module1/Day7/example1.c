#include <stdio.h>

FILE *openFile(const char *fileName, const char *mode)
{
   FILE *file = fopen(fileName, mode);
   if (file == NULL)
   {
      printf("unable to open %s\n", fileName);
      return NULL;
   }
   return file;
}
void closeFile(FILE *file)
{
   fclose(file);
}

void copyfile(const char *sourcefilename, const char *destinationfilename)
{

   FILE *sourcefile = openFile(sourcefilename, "r");
   if (sourcefile == NULL)
   {
      return;
   }

   FILE *destinationFile = openFile(destinationfilename, "w");
   if (destinationFile == NULL)
   {
      closeFile(sourcefile);
      return;
   }

   char ch;
 
   while ((ch = fgetc(sourcefile)) != EOF)
   {
      fputc(ch, destinationFile);
   }

   closeFile(sourcefile);
   closeFile(destinationFile);
}

int main()
{
   char sourcefilename[100], destinationfilename[100];

   printf("source file name ");
   scanf("%s", sourcefilename);

   printf("destination file name ");
   scanf("%s", destinationfilename);

   copyfile(sourcefilename, destinationfilename);
   return 0;
}

