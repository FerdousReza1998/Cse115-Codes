///Write a C program to read any integer from user and compute the reverse of given number. Also output
///whether the reverse number is prime or not. Sample Input/Output:

#include <stdio.h>

int main()
{
  int n, r = 0 , i , isPrime =1;

  printf(" Enter a number :");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

   printf(" Reverse of the number = %d\n", r);

   for(i=2 ; i<=r/2 ;i++)
   {
       if(r%i==0)
       {
           isPrime=0;
           break;

       }
   }

   if(isPrime==1)
   {
       printf(" It is a prime number ");
   }
   else
   {
        printf(" It is not a prime number ");
   }


  return 0;
}
