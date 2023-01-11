
///1-x^2/2!+x^4/4!-x^6/6!+x^8/8!+...+x^n/n!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ,fact_n =1 , sum=0 ,x ;//, fact_n2 = 1 ,qn;
    char sign = 'p';


    printf("Enter x : ");
    scanf("%f" , &x);
    printf("Enter n : ");
    scanf("%f" , &n);

    for ( int i =0 ; i<=n ; i=i+2)
    {
           fact_n=1;

        for( int j=1 ; j<= i;  j++)
        {
            fact_n = fact_n*j;
        }


       if(sign =='p')
       {
           sum = sum + ((pow(x,i))/fact_n);
           sign = 'n';
       }

        else if(sign =='n')
       {
           sum = sum - ((pow(x,i))/fact_n);
           sign = 'p';
       }

    }
    printf("sf(%.0f) = %.3f " , n , sum);

    return 0;
}
