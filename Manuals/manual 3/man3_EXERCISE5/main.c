///Check if the roots of the equation: ax2+bx+c=0 are real or not. If they are real, then print
///them; otherwise print “No real root exist.” Read a,b,c from user.


#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a ,b ,c , D ;

printf(" Input three numbers : ");
   scanf("%f %f %f", &a ,&b , &c );

   D = ( b*b ) - ( 4*a*c );

   if ( D<0)
{
    printf(  "real root does not exist ");

}
    else if( D> 0)

    {
      printf("  roots of the equation is real ");
    }

    else

    {
      printf("  roots of the equation is real ");
    }

    return 0;
}
