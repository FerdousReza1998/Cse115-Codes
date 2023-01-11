///Solve the equation: ax^2+bx+c=0 and print the solutions. Read a,b,c from user

#include<stdio.h>
#include<math.h>


int main()
{
    float a , b , c  ,x1,  x2 ;

    printf(" Input a : ");
    scanf("%f", &a);

    printf(" Input b : ");
    scanf("%f", &b);

    printf(" Input c : ");
    scanf("%f", &c);



    x1 = (-b + sqrt((b*b) - (4*a*c))) / (2.0*a) ;


    x2 = (-b - sqrt((b*b) - (4*a*c))) / (2.0*a) ;

    printf(" x1 is : %.2f \n x2 is : %.2f " , x1 , x2 );



    return 0;
}
