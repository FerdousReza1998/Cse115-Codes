
///Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)

#include<stdio.h>
void main()
{
int n, i = 2, j, isPrime , m , sum = 0 ,m2;

printf("Enter m: ");
scanf("%d",&m);
printf("Enter n: ");
scanf("%d",&n);

printf("All prime numbers are : ", n);
m2 = m;

while (m<=n)
{
       isPrime = 1;

for ( j = 2 ; j <= m/2; j++ )
        {


                        if ( m%j == 0 )
                         {
                             isPrime = 0;
                             break;
                         }
        }

            if (isPrime==1)
              {
                printf("%d ",m);

                sum =sum+m;
              }
       m++;
   }

   printf("\nThe sum of all prime numbers between %d and %d : %d \n", m2,n,sum);
}
