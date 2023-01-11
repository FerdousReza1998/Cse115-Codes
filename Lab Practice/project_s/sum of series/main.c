#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ,sum = 0;
    printf("Enter the value of n :");
    scanf("%d" , &n);
    printf("The series : ");
   for(i=3 ; i<=n ; i=i+4)
   {
       sum = sum + i;
      printf(" %d" , i);
   }

   printf(" \nsum = %d" , sum);

    return 0;
}

