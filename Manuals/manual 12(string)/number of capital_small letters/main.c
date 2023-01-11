///Number of capital-small letters, digits

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];

    int i , capital,small,digit;

    i=capital=small=digit=0;

    printf("Enter a string: ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
           {
                capital++;
           }

        else if(str[i]>='a' && str[i]<='z')
           {
               small++;

           }
        else  if (str[i]>='0' && str[i]<='9')
           {
               digit++;
           }


       i++;

    }
    printf("number of capital letters = %d\n" ,capital);
    printf("number of small letters = %d\n" ,small);
    printf("number of digit = %d\n" ,digit);


    return 0;
}
