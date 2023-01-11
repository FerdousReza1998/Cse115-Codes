///Write a C program that reads a string, create a new string containing all the characters the input
///string except the vowels in it, and then prints the new string.


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i ;
    char str[100];

    printf("Enter a string : ");
    gets(str);

   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
       {
           printf("%c" , str[i]);
       }
   }
    return 0;
}
