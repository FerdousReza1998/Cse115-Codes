///C program to compute the integer resulting from rounding a number n (using function)

#include <stdio.h>
#include <stdlib.h>

int round(float);

int main()


{
    float n;

    printf("Enter a number : ");
    scanf("%f" , &n);

    int s = round(n);

    printf("%d" , s);

    return 0;
}

 int round(float a)
 {
     int i = a;

     if(a-i>=0.5)
     {
         return i+1;
     }

     else
     {
         return i ;
     }


 }
