#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2;
    char ch;

    f1 = fopen( "file1.txt","r");
    f2 = fopen( "file2.txt","a");

      if(f1==NULL || f2 ==NULL)
      {
          printf("cannot open file");
          exit(1);
      }
     while(1)
     {
         ch=fgetc(f1);
         if(ch==EOF)
            break;
         fputc(ch,f2);


     }

      fclose(f1);
       fclose(f2);

    return 0;
}
