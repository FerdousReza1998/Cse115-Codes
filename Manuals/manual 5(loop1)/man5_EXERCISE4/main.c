///Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3

#include <stdio.h>
#include <math.h>

int main()
{
    int i , n, sum=0;
    printf("enter the value of n : ");
    scanf("%d" ,&n);
    i=2;
    while(i<=n)
    {
        sum=sum+pow(i,3);
        i=i+3;
       /// printf("%d" ,n);

    }
    printf("%d" ,sum);
    return 0;
}
