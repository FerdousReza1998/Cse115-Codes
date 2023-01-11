#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string :");
    gets(str);

     for(i=0;str[i]!='\0';i++)
    {
        printf("\n %c = %d",str[i],str[i]);

    }

    return 0;
}
