///Compute the sum of the following geometric progression using a function with 2 parameters r and n:

///1 + r + r^2 + … + r^n (read the values of r and n from user)

#include <stdio.h>
#include <stdlib.h>

int  proggresion(int ,int);

int main()
{
    int r , n  ,s;

    printf("Enter r : ");
    scanf("%d" , &r);
     printf("Enter n : ");
    scanf("%d" , &n);

     s = proggresion(r,n);


     printf("Sum = %d", s);

    return 0;
}
 int  proggresion(int a ,int b)

 {
     int i , sum =0;

     for( i=0 ; i<=b ; i++)
     {
         sum = sum + pow(a,i);

     }



     return sum;
 }
