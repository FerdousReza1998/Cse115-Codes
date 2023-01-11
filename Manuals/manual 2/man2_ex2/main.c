///C Program to compute squared root and cube of an input number.
#include <stdio.h>
#include<math.h>


int main()
{

    float Num , square_root , cube_number ;

    printf("Enter a number : ");
    scanf("%f",&Num);

    square_root = sqrt(Num);

    cube_number = pow(Num,3);

    printf(" Square root is : %.2f \n Cube is : %.2f",square_root,cube_number);

    return 0;
}
