#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,   count=0 , i , isPrime =1;
    printf(" Enter the  number : ");
    scanf("%d" , &num);



    while(num>0)
     {  count++;
         num /= 10;
     }

    printf(" total  number digits  = %d \n", count);

    for(i=2 ; i<=count/2 ;i++)
   {
       if(count%i==0)
       {
           isPrime=0;
           break;

       }
   }

   if(isPrime==0)
   {
       printf(" It is not a prime number ");
   }

   else
   {
      printf(" It is a prime number ");
   }
    return 0;
}
