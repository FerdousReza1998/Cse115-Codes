///Write a C program that counts the number of vowels in an input string.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , vowcount=0 ;
    char str[100];

    printf("Enter a string : ");
    gets(str);

   for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
           vowcount++;
        }
    }

     printf("\nVowels = %d" , vowcount);

    return 0;
}
