///Write a C program that computes the sum of the series: 3+7+11+…+n, where n is a user input

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ,sum=0;
    printf("Enter the value of n :");
   scanf("%d" , &n);

   for(i=3 ; i<=n ; i=i+4)  ///i+=4
   {
       sum=sum+i;           ///sum+=i
   }
   printf("sum=%d" , sum);
    return 0;
}



/*#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    int n , i=3 ,sum=0;
    printf("Enter the value of n :");
   scanf("%d" , &n);

   while(i<=n)
   {
     sum=sum+i;
     i=i+4;
   }
   printf("sum=%d" , sum);
 }
*/
