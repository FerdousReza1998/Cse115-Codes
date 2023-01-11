#include <stdio.h>
#include <stdlib.h>

void average(float A , float B)
 {

   float avg = ( A + B ) / 2.0;
    printf(" %.2f\n",avg);

   ///return avg;

 }

int main()
{

    float ans;

    ///ans = average( 2 , 9 );

    /// ans = pow( 2 , 3 );

   /// printf(" %.2f",ans);


   average( 2 , 9 );
   average( 4 , 8 );

    average( 7 , 2 );
    average( 1 , 1 );
    average( 8 , 8 );
    average( 25 , 1 );

    return 0;
}




