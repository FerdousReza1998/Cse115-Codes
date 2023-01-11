///Find the sum of the following series using user-defined function: 1/1! + 2/2! + 3/3! + …… +1/N!

#include <stdio.h>
#include <stdlib.h>

void series(float);


int main()
{
    float  n;
    printf("Enter n : ");
    scanf("%f",&n);

    series(n);
    return 0;
}

void series( float a)

{
      float  i , j, fact_n , sum=0;

    for ( int i =1 ; i<=a ; i++)
    {
        fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;
        }

       ///  printf("%.2f " , fact_n);

        sum = sum + (i/fact_n);
    }
    printf("sf(%.0f) = %.2f " , a, sum);





}



