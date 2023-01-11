///Find the maximum between two numbers using switch case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ,y ;
   printf(" input two number : ");
   scanf("%d %d" , &x ,&y);



   switch(x>y)
   {
   case 1 :
        printf(" \n%d is maximum " ,x);
        break;
    case 0 :
        printf(" \n%d is maximum " ,y);
        break;

   }



    return 0;
}
