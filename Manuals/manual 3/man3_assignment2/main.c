///Write a C program to input all angles of a triangle and check whether triangle is valid or
///not. (Hint: sum of all angles of any triangle is 180 degrees)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ,y ,z ;

     printf(" Input three angles of a triangle : ");
     scanf("%f %f %f" , &x , &y ,&z);

    if((x+y+z==180)&&(x>0)&&(y>0)&&(z>0))
    {
        printf(" \nthis triangle is valid ");
     }

      else
  {
      printf(" \nthis triangle is not valid ");
  }



    return 0;
}
