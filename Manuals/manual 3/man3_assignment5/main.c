
///Write a C program that reads the radius r of a circle and the side a of a square from user
///and then checks if that square can be placed inside that circle or not. Hint: Use
///Pythagorean theorem.



#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a , d , r ;
   printf("input radius of the circle : ");
   scanf("%f" , &r);

    printf("input side  of the square : ");
   scanf("%f" , &a);

      d = 2*r;
   if((a*a)+(a*a)<=(d*d))

 {
    printf("square can be placed inside this circle ");
    }

    else

     {
    printf("square can not be placed inside this circle ");
    }
    return 0;
}
