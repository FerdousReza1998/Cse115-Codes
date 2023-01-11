///C program to check whether an input is an odd number or an even number using switch-case

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;


    printf(" input a number : ");
    scanf("%d" , &num);

    switch(num%2)
    {
        case 0 :
        printf(" \n %d is Even." , num);
        break;

        default :
            printf(" \n %d is odd. " , num);


    }







    return 0;
}
