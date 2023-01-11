/*


  *********
   *******
    *****
     ***
      *

*/


#include <stdio.h>
int main()
{
   int n, rows, column, space;

   printf("Enter the number of n: ");
   scanf("%d", &n);

   for (rows = n; rows >= 1; --rows)
   {
      for (column = 1; column <= n - rows; ++column)
        {
           printf(" ");
        }

      for (column = 1; column <=2*rows-1; ++column)
         {
             printf("*");
         }

      printf("\n");
   }
   return 0;
}
