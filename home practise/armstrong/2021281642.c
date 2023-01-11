#include <stdio.h>
#include <math.h>

int main() {
   int input, Number, remainder, n = 0;
   float result = 0;

   printf("Enter an number to check: ");
   scanf("%d", &input);

   Number = input;

   for (Number = input; Number!= 0; n++) {
       Number = Number /  10;
   }

   for (Number= input; Number!= 0; Number =Number/ 10) {
       remainder = Number % 10;


      result =result + pow(remainder, n);
   }


   if ((int)result == input)
    printf("%d is an Armstrong number.", input);
   else
    printf("%d is not an Armstrong number.", input);
   return 0;
}
