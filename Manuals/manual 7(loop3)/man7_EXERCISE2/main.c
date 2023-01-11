///Write a C program to compute the quadruple factorial of a given number n, q(n) = (2n)!/n!


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 ;//, fact_n2 = 1 ,qn;


    printf("Enter a number : ");
    scanf("%f" , &n);

    for( int i=1 ; i<=n ; i++)
    {
        fact_n = fact_n*i ;

    }

    ///n2 = 2*n;

    float  fact_n2=1;

    for( int i=1 ; i<=2*n ; i++ )
    {
        fact_n2 = fact_n2*i;
    }

    float qn = fact_n2/fact_n;

    printf(" q(%.0f) = %.2f" ,  n , qn);

    return 0;
}
