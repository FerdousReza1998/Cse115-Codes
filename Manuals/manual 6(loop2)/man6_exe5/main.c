///Write a C program that can be used to find whether a number is a prime number or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n ,isprime = 1;
    printf("Enter any number to check if it is prime : ");
    scanf("%d" , &n);

    for(i = 2 ; i<=n/2 ; i++)
    {

        if(n%i==0)
        {
            isprime = 0;
            break;
        }
    }

    if(isprime == 0)
    {
      printf("\n %d is not a prime number", n);
    }
    else
    {
      printf("\n %d is a prime number", n);
    }

   /// (isprime == 0) ? printf("\n %d is not a prime number", n) : printf("\n %d is a prime number", n);

    return 0;
}
