
///Write a C program to print all prime numbers between 1 and n in reverse order (n is an input).

#include<stdio.h>
void main()
{
int n, i, isPrime ;

printf("Enter n: ");
scanf("%d",&n);

printf("All  prime numbers between 1 to %d are in reverse order ", n);




while (n>=2)
{
       isPrime = 1;

for ( i = 2 ; i <= n/2; i++ )
        {


                        if ( n%i == 0 )
                         {
                             isPrime = 0;
                             break;
                         }
        }

            if (isPrime==1)
              {

                printf("%d ",n);

              }
       n--;
   }
}
