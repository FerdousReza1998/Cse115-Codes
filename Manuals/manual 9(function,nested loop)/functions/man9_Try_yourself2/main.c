///Write C program using a function to check if a given number is positive, negative, or zero.

#include <stdio.h>
#include <stdlib.h>

 void check();

 int main()
{
     check();
}

   void check()
{

    int x;
    printf("Enter an integer : ");
    scanf("%d" , &x);

    if(x>0)
    {
          printf("positive");
    }
     else if(x<0)
    {
        printf("negative");
    }

    else
     {
        printf("Zero");
     }

}




