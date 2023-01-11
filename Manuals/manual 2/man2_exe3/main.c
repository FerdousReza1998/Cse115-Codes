///C program to print size of variables of different data types.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   float b;
   double c;
   char d;

   ///int re;

  ///printf(" size of int : %d" , &a);

  ///re = sizeof(a);

   printf(" size of int : %d" , sizeof(a));
  /// printf("\n size of int : %d" , sizeof(int));

  printf("\n size of float : %d" , sizeof(b));
  ///printf("\n size of float : %d" , sizeof(float));

  ///printf("\n size of double : %d" , sizeof(c));
    printf("\n size of double: %d" , sizeof(double));

    ///printf("\n size of character : %d" , sizeof(d));
    printf("\n size of character : %d" , sizeof(char));


    return 0;
}
