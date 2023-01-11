#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 , ans=1 ;//, fact_n2 = 1 ,qn;

    printf("Enter a number : ");
    scanf("%f" , &n);

    for ( int i =1 ; i<=n ; i=i+3)
    {
        fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;
        }

        ans = ans*fact_n;
    }
    printf("sf(%.0f) = %.0f " , n , ans);

    return 0;
}
