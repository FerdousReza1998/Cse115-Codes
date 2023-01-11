///Write a C program that takes input the first letter of any of the following fruits name–


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter ;
    printf(" Input the first letter : ");
    scanf("%c" , &letter);
    switch(letter)
    {
    case 'M':
    case 'm':
        printf(" \nPrice of the Mango is Tk.500/kg");
        break;
    case 'A':
    case 'a':
        printf(" \nPrice of the Apple is Tk.250/kg");
        break;
    case 'B':
    case 'b':
        printf(" \nPrice of the Banana is Tk.130/kg");
        break;
    case 'C':
    case 'c':
        printf(" \nPrice of the Cherry is Tk.270/kg");
        break;


    default:
        printf(" \nFruit is not on the list");
        break;
    }



    return 0;
}
