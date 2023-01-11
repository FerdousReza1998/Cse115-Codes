///Write a program that reads in 3 numbers and prints their average
#include <stdio.h>


int main()
{ float a,b,c,Avg;


   printf(" Insert first number: ");
   scanf("%f",&a);
   printf("Insert second number: ");
   scanf("%f",&b);
   printf("Insert third number: ");
   scanf("%f",&c);

/*
  printf(" Insert first ,second and third number: ");
  scanf("%f %f %f",&a,&b,&c);

  */


   Avg = (a + b + c) / 3.0;
   printf(" The average is = %.1f", Avg);
    return 0;
}
