///Write C program to count the number of capital letters and the number of small letters in an input string
///and print those numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];

    int i , capital , small ,digit ;

    i=0;

    capital=small=digit=0;

    printf("Enter a string : ");
    gets(str);

    while(str[i]!='\0')
    {

            if(str[i]>=65 && str[i]<=90)
            {
                capital++;
            }
            else if(str[i]>=97 && str[i]<=122)
            {
               small++;
            }
             else if(str[i]>=48 && str[i]<=57)
            {
               digit++;
            }

        i++;

    }

      printf("Number of capital letters = %d\n" ,capital);
      printf("Number of capital letters = %d\n" ,small);
       printf("Number of capital letters = %d\n" ,digit);

    return 0;
}
