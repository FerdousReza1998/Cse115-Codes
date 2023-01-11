///Write a C program that reads an integer and then computes & prints the factorial of that integer

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , i , fact = 1;
   printf("Enter the value of n : ");
   scanf("%d" , &n);

   printf(" %d! = " , n );

   for(i=1;i<=n;i++)
   {
        printf(" %d " , i );
       fact = fact*i;
   }
   printf(" = %d" , fact);
    return 0;
}
