///Write a C program to read 2 integers: n and r from user and compute the value of n𝑷𝒓 = 𝒏!/(𝒏−𝒓)!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n , r ,sum=1;

    printf("Enter n : ");
    scanf("%d" , &n);
    printf("Enter r : ");
    scanf("%d" , &r);


    for(i=0 ; i<=r-1 ; i=i+1 )
    {
        /// n-r+1 = n-(r-1), thats why loop condition ends at r-1 , i <= r-1
        /// n = (n-0). thats why i starts from 0 , i=0

        /// at first step , sum = sum * (n - 0)
        /// at final step , sum = sum * (n - (r-1))
        sum=sum*(n-i);


    }
    printf(" nPr = %d" , sum);
    return 0;
}
