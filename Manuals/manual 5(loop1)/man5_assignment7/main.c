///Write a C program to find power of any number using for loop. Don’t use pow() function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  sum = 1 , base ,power , i ;
    printf("Enter base : ");
    scanf("%d" , &base);
     printf("Enter power : ");
    scanf("%d" , &power);

    for(i=1 ; i<=power ; i++)
    {
        sum = sum*base;
    }
printf(" %d to the power %d = %d" , base , power , sum);

    return 0;
}
