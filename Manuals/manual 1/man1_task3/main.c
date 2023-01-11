///Convert Celsius to Fahrenheit unit using the following formula. Take the value of C as input
///from user and calculate the value of F.
///F= C * (9/5) + 32

#include <stdio.h>
#include <stdlib.h>

int main()

{
     float C,F;
     printf("Input Celsius temperature = ");
     scanf("%f",&C);

     F = C*(9/5.0)+32;
     printf(" Fahrenheit temperature = %.2f",F);


    return 0;
}
