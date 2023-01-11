///Write a C program to compute the super-factorial of a given number n, sf(n) = 1! * 2! * 3! * … n!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 , ans=1 ;//, fact_n2 = 1 ,qn;

    printf("Enter a number : ");
    scanf("%f" , &n);

    for ( int i =1 ; i<=n ; i++)
    {
        fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;
        }

        ans = ans*fact_n;
    }
    printf("sf(%.0f) = %.2f " , n , ans);

    return 0;
}
