///Write a C program using 3 functions to compute diameter, circumference and area of a circle whose
///radius is given by the user as the input.

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

void diameter(float);

void circumference(float);

void area(float);

int main()
{
    float r;

    printf("Enter radius : ");
    scanf("%f" , &r);

    diameter(r);
    circumference(r);
    area(r);

    return 0;
}

    void diameter(float a)
{
    float dia;

    dia = 2*a;

    printf("Diameter of circle is :  %.2f\n" ,dia );

}

    void circumference( float b)
{
    float cir;

    cir = 2*PI*b;

    printf("circumference of circle is :  %.3f\n" ,cir );

}
    void area(float c)
{
    float area;

    area = PI*c*c;

    printf("area of circle is :  %.3f\n" ,area);

}


