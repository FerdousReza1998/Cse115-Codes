///C program to find maximum between two numbers:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;

    printf(" Input any two numbers : ");
    scanf("%d %d" ,&x , &y);

     if(x>y)
     {
         printf(" maximum number is : %d " , x);
     }


     else
     {
         printf(" maximum number is : %d " , y);
     }

    return 0;
}
