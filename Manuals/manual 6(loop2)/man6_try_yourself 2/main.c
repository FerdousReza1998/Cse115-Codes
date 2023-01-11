///Write a C program to read an integer and compute the sum of digits in it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , digit , temp , sum=0;
    printf("Enter the  number : ");
    scanf("%d" , &num);

    temp = num;

    while(num>0)
     {
        digit = num % 10;

        sum  = sum + digit;

        num =num / 10;
     }

    printf("Sum of the digits in  %d is = %d\n",   temp ,sum);




    return 0;
}
