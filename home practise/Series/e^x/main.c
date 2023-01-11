
///1+x^1/1!+x^2/2!+x^3/3!+x^4/4!+...+x^n/n!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 , sum=0 ,x ;//, fact_n2 = 1 ,qn;

    printf("Enter x : ");
    scanf("%f" , &x);
    printf("Enter n : ");
    scanf("%f" , &n);

    for ( int i =0 ; i<=n ; i++)
    {
           fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;

              //printf("sf(%.0f) = %.3f \n" , n , (1.0000/fact_n));
        }


            sum = sum + ((pow(x,i))/fact_n);

    }
    printf("sf(%.0f) = %.3f " , n , sum);

    return 0;
}
