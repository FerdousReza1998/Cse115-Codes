
///Read a temperature in Celsius and print its Fahrenheit equivalent (Hint: C=(F-32)*5/9)

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
