#include <stdio.h>
#define PI 3.1415

int main()
{
  float radius, diameter, circumference, area;

  int d;
  printf("Enter the radius:" );

  scanf(" %f" , &radius);




  diameter= 2*radius;
  circumference = 2*PI*radius;
  area= PI*radius*radius;
  printf("the diameter is= %.2f\n", diameter);
  printf(" the circumference is = %.2f\n", circumference);
  printf(" the area is = %.2f\n",  area );


    return 0;
}
