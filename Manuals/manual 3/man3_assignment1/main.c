///Write a C program to input sides of a triangle and check whether triangle is valid or not
///(Hint: if sum of any two sides of a triangle is greater than the third side then the triangle
///is valid

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x ,y , z;
  printf(" Input three sides of a triangle : ");
  scanf("%f %f %f" , &x , &y ,&z);

   if((x+y>z)&&(y+z>x)&&(z+x>y))
   {
       printf(" \nthis triangle is valid ");
   }
  else
  {
      printf(" \nthis triangle is not valid ");
  }

    return 0;
}
