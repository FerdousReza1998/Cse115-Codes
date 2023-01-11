///Write a C program to read 2 integers: n and r from user and compute the value of nCr = n!/r!*(n-r)!

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float i  ,n , r ,sum_nCr=1 , sum_nPr=1 , sum_r =1;

    printf("Enter n : ");
    scanf("%f" , &n);
    printf("Enter r : ");
    scanf("%f" , &r);

/// find nPr
    for(i=0 ; i<=r-1 ; i=i+1 )
    {
        /// n-r+1 = n-(r-1), thats why loop condition ends at r-1 , i <= r-1
        /// n = (n-0). thats why i starts from 0 , i=0

        /// at first step , sum = sum * (n - 0)
        /// at final step , sum = sum * (n - (r-1))
        sum_nPr=sum_nPr*(n-i);
    }




/// find r!
    for(i=1 ; i<=r ; i++)
        {
            sum_r = sum_r*i;
        }

   ///find nCr


   sum_nCr = sum_nPr*(1.00/sum_r);

   printf("nCr = %.2f" , sum_nCr);

    return 0;
}
