#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100];
    int i;

    printf("Enter a string : ");
    gets(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];

    }

    str2[i]='\0';

    printf("\nCopied string is : %s",str2);

    return 0;
}
