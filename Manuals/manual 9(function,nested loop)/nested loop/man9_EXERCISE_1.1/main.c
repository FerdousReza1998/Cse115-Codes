
/*



  * * * * *
   * * * *
    * * *
     * *
      *




*/





#include <stdio.h>
int main()
{
   int n, rows, column, space;

   printf("Enter the number of rows: ");
   scanf("%d", &n);

   for (rows = n; rows >= 1; rows--)
   {
      for (column = 1; column <= n - rows; column++)
        {
           printf(" ");
        }

      for (column = 1; column <= rows ; column++)
         {
             printf("* ");
         }

      printf("\n");
   }
   return 0;
}
