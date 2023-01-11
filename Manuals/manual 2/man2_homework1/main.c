///Compute the value of 5x^3-4x^2+√(x)+3; read x from user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, equation;

    printf(" input a value : ");
    scanf(" %f" , &x);

     equation = (5*pow(x,3)) - (4* pow(x,2)) + sqrt(x) + 3 ;
     printf(" Computed Value : %.3f", equation);

    return 0;
}
