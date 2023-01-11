///Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n ;

    printf("Print odd numbers till : ");
    scanf("%d" , &n);
    printf("All odd numbers from 1 to %d are: \n", n);

    for(i=1 ; i<=n ; i=i+1)
    {
        if(i%2!=0)
        {
            printf("%d " , i);
        }
    }
    return 0;
}
