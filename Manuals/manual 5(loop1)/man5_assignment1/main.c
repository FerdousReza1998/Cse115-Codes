///Write a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2
#include <stdio.h>
#include <math.h>

int main()
{
    int n ,i, sum=0,k;
    printf(" Enter n :");
    scanf("%d" ,&n);

    k = 0;
   i=5;
    while(i<=n)
    {

      sum=sum+pow(i,2);

       i=i+4+k;
       k=k+2;

    }

    /*

    for( i=5 , k=0 ;  i<=n ; i=i+4+k ,k=k+2  )
    {
       sum=sum+pow(i,2);
    }

    */

         printf("%d" , sum);

    return 0;
}
