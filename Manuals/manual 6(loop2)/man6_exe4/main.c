///Write a C program to find all the factors of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num ;

    printf("Enter the number to find its factor : ");
    scanf("%d", &num );

    for(i=1 ; i<=num/2 ;i = i+1)
    {
        if(num%i==0)
        {

            printf("%d " , i);
        }
    }
    return 0;
}
