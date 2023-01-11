///Take two string inputs, calculate lengths of both (without using strlen()) and display the smaller
///one.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100]; 
	
    int i=0;
	
   int len1=0,len2=0;
   
    printf("Enter 1st string : ");
    gets(str1);
	
    printf("Enter 2nd string : ");
    gets(str2);

    while(str1[i]!='\0')
    {
        i++;
        len1++;

    }

    i=0;
	
    while(str2[i]!='\0')
    {
         i++;
        len2++;

    }


    if(len1<len2)
    {
        printf("%s" , str1);
    }
    else if(len1>len2)
    {
         printf("%s" ,str2);
    }
    else
    {
        printf("Both are equal length");
    }

    return 0;
}
