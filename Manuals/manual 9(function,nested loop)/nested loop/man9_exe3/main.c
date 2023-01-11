#include<stdio.h>

void main()

{
int i, j, n;

float sum=0, term;

printf("Enter n:");
scanf("%d", &n);

for ( i = 1 ; i <= n ; i++ )
    {

        term = 0;

       for ( j = 1 ; j <= i ; j++ )
          {
            term+=1.0/j;
          }

            sum = sum +term;

    }

      printf("%f\n",sum);

}
