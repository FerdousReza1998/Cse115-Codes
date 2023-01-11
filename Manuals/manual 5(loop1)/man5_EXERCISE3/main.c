///Write a program to compute the following series using while loop: 4+11+18++….+n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n, sum=0;
    printf("enter the value of n : ");
    scanf("%d" ,&n);
    i=4;
    while(i<=n)
    {
        sum=sum+i;
        i=i+7;
       /// printf("%d" ,n);

    }
    printf("%d" ,sum);
    return 0;
}
