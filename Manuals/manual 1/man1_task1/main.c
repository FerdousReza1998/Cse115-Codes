 ///Write a program that asks the user to enter two numbers, obtains the two numbers from the user
///and prints the sum, product, difference, quotient and remainder of the two numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B ,sum , product ,difference ,quotient ,remainder;
    printf(" Insert first number:");
    scanf("%d",&A);
 printf(" Insert second number:");

  scanf("%d",&B);


  sum=A+B;
  product=A*B;
  difference=A-B;
  quotient=A/B;
  remainder=A%B;

///printf(" Sum = %d\n Product = %d\n Difference =%d\n Quotient =%d\n Remainder =%d\n", sum,product,difference,quotient,remainder );
printf(" Sum = %d\n",sum);
printf(" Product = %d\n", product);
printf(" Difference = %d\n",difference);
printf(" Quotient = %d \n",quotient);
printf(" Remainder = %d" , remainder);
    return 0;
}
