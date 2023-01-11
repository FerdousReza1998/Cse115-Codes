///C Program to find the number of spaces in a string (character array):

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int i , count=0;
   printf("\nEnter string : ");
   gets(str);

   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]==' ')
       {
         count++;
       }
   }

    printf("\n space = %d" , count);
    return 0;
}
