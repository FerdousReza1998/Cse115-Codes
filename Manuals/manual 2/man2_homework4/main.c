///Compute quotient and remainder when you divide x by y (read x, y from user). Also,
///compute quotient and remainder when you divide y by x. Print all these four results.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;
    printf(" input x : ");
    scanf("%d" , &x);
   printf(" input y : ");
    scanf("%d" , &y);

   /// printf(" when you divide x by y, Quotient = %d ,remainder = %d  ", x/y , x%y);
      ///  printf("\n when you divide y by x ,Quotient = %d ,remainder = %d  ", y/x , y%x);

    printf("Quotient of %d/%d is = %d",x,y, x/y );
      printf("\n Remainder %d/%d is = %d",x,y, x%y );
        printf("\n Quotient of %d/%d is = %d",y,x, y/x );
      printf("\n Remainder %d/%d is = %d",y,x, y%x );
    return 0;
}
