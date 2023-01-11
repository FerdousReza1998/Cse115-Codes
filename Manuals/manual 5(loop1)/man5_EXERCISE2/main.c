///Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all
///letters in small letters and the 2nd one will print them in capital letters.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i ;
    printf("all small letters of the alphabet are : ");

    for(i='a';i<='z';i=i+1)
    {
        printf("%c ",i);
    }

       printf("\nall Capital letters of the alphabet are : ");
    for(i='A';i<='Z';i=i+1)
    {
        printf("%c ",i);
    }
    return 0;
}
