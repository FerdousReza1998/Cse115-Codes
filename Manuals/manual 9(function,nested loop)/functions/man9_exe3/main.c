///C program to determine if a given number is prime using function

#include <stdio.h>
#include <stdlib.h>


void prime(int);

int main()
{
    int n;

    printf("Enter any number to check if it is prime : ");
    scanf("%d" , &n);

    prime(n);

    return 0;
}

void prime(int a)

{
    int i ,isprime = 1;

  for(i = 2 ; i<=a/2 ; i++)
    {

        if(a%i==0)
        {
            isprime = 0;
            break;
        }
    }

    if(isprime == 0)
    {
      printf("\n %d is not a prime number", a);
    }
    else
    {
      printf("\n %d is a prime number", a);

    }

}










