///Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , digit , temp , sum=0 , i , isPrime =1;
    printf(" Enter the  number : ");
    scanf("%d" , &num);

    temp = num;

    while(num>0)
     {
        digit = num % 10;

        sum  = sum + digit;

        num =num / 10;
     }

    printf(" Sum of the digits is = %d \n", sum);

    for(i=2 ; i<=sum/2 ;i++)
   {
       if(sum%i==0)
       {
           isPrime=0;
           break;

       }
   }

   if(isPrime==0)
   {
       printf(" It is not a prime number ");
   }

   else
   {
      printf(" It is a prime number ");
   }
    return 0;
}
