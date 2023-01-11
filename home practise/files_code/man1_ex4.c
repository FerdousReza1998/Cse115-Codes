#include<stdio.h>
#include<math.h>

/// #define PI 3.1416

int main()
{

    float const PI = 3.142;

float radius, diameter, circumference, area;

///printf("\nOld radius %f \n\n",radius);

printf("Enter the radius of a circle: ");
scanf("%f",&radius);

///printf("\n\nNew radius %f\n",radius);
//   PI = 4;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
     /// circumference = diameter * PI;
    area = PI * radius * radius;

    ///area = PI * pow(radius , 2);

printf("The Diameter is: %.2f \n",diameter);
printf("The Circumference is: %.2f \n",circumference);
printf("The area is: %.2f \n",area);

//radius = 15;
///printf("\n\nLast radius %f\n\n",radius);

return 0;

}
