///Find the volume of a (a) cube and (b) cylinder


#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main()
{
    float vol_cube , a , vol_cylinder , r , d , h ;

    printf(" input the edge of the cube : ");
    scanf(" %f" , &a);

    vol_cube = pow(a,3);

    printf(" The volume of the cube : %.2f " ,  vol_cube);

    ///printf(" \n input the radius of the cylinder : ");
    ///scanf(" %f" , &r);

    printf(" \n input the diameter of the cylinder : ");
    scanf(" %f" , &d);

    printf(" \n input the height of the cylinder :  ");
    scanf("%f", &h);

    ///vol_cylinder = PI * r * r * h;

    vol_cylinder = PI * d * d * (1/4.00) * h;

    printf(" The volume of the cylinder : %f " ,  vol_cylinder);

    return 0;
}
