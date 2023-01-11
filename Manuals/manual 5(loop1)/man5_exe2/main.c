
///Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , count =0 , i ;
   printf("Print odd numbers till: ");
   scanf("%d", &n);

printf("odd numbers from 1 to %d are : " , n );

   for(i=1;i<=n;i=i+2)
   {
       /*
       if( i%7 == 0)
       {
           printf("%d ", i);
       }

        if( i%8 == 0)
       {
           printf(" , %d \n", i);
       }
       */
       //printf("odd numbers from 1 to %d are :" , n );
       printf(" %d ", i);

      /// count=count+1;
       //count++;

   }

 /// printf("\n odd numbers are : %d" , count );
    return 0;
}
