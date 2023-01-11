///Write a C program to find Greatest Common Divisor (GCD ) of two given integers. GCD of two integers is
///the highest number that totally divides those two integers. E.g. GCD of 15 and 25 is 5.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 ,n2 , i , Gcd ;

    printf("Enter two integers to find GCD : ");
    scanf("%d %d" ,&n1 , &n2 );

    for(i=2 ; i<=n1 && i<=n2 ; i++)
    {

        if(n1%i==0 && n2%i==0)
        {
            ///Gcd = i;
            break;
        }
    }

   /// printf(" GCD of %d and %d is %d " , n1 ,n2, Gcd);
    printf(" \nGCD of %d and %d is %d " , n1 ,n2, i);
    return 0;
}
