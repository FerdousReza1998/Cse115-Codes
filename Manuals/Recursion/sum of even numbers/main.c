#include <stdio.h>
#include <stdlib.h>


int sum(int);

int main()
{
    int n,s;

    printf("Enter n : ");
    scanf("%d" ,&n);

    s=sum(n);
    printf("sum = %d " ,s);

    return 0;
}
   int sum(int n)
   {
           if(n==0)
           {
               return 0;
           }
            else if(n==-1)
           {
               return 0;
           }


        if(n%2==0)      ///   for odd  (n%2!=0)
       {
           return n+sum(n-2);
       }

          return (n-1)+sum(n-2);


   }

