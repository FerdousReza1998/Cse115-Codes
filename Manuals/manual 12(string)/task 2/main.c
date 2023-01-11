///Write a program to compare two strings without using C library function.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int diff,i=0;

    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);

    while(str1[i]!='\0' || str2[i]!='\0')
    {
        diff = (str1[i] - str2[i]);
           if(diff != 0)
              break;
        i++;
    }

    if(diff>0)
    {
        printf("%s is bigger than %s",str1,str2);
    }
     if(diff<0)
    {
        printf("%s is bigger than %s",str2,str1);
    }

    if(diff==0)
    {
        printf("Both the string are equal");
    }
    return 0;
}
