///Write a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + … + 1/n! where n is an input.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 , sum=0 ;//, fact_n2 = 1 ,qn;

    printf("Enter a number : ");
    scanf("%f" , &n);

    for ( int i =1 ; i<=n ; i++)
    {
           fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;

              //printf("sf(%.0f) = %.3f \n" , n , (1.0000/fact_n));
        }

        sum = sum + (1.00/fact_n);
    }
    printf("sf(%.0f) = %.3f " , n , sum);

    return 0;
}
