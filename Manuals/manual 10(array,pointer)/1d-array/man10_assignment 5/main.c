///Write C program to check if an input string is a palindrome (e.g. “madam”, “dad”, etc.) or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter string : ");
    gets(str1);
    int i=0,len=0 ,j;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }

    str2[j]='\0';



    int d = strcmp(str1 ,str2);

    if(d==0)
    {
        printf("String is palindrome");
    }
    else
    {
         printf("String is not palindrome");
    }

    return 0;
}
