

///Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11,


#include<stdio.h>
void main()
{
int n, i = 2, count =0 ,j, isPrime;

printf("Enter n: ");
scanf("%d",&n);

printf("First %d prime numbers: ", n);

while (count<n)
{
       isPrime = 1;

for ( j = 2 ; j <= i/2; j++ )
        {


                        if ( i%j == 0 )
                         {
                             isPrime = 0;
                             break;
                         }
        }

            if (isPrime==1)
              {
                printf("%d ",i);
                count++;
              }
       i++;
   }
}
