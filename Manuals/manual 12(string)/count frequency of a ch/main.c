///Count frequency of a character in a string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],n;
    int i , count=0;

    printf("Enter a string : ");
    gets(str);

    printf("\nEnter the character which you want to search : ");
    scanf("%c",&n);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==n)
            count++;

    }

    printf(" %c is present %d times  ", n,count);
    return 0;
}
