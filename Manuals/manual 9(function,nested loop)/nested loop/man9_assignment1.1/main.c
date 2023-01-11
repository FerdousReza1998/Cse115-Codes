
/*

 *****
  *  *
   * *
    **
     *



*/


#include <stdio.h>
int main()
{
   int n, rows, column;

   printf("Enter the number of n: ");
   scanf("%d", &n);

   for (rows = n; rows >= 1; --rows)
   {
      for (column= 1; column <= n - rows; ++column)
        {
           printf(" ");
        }

      for (column = 1; column <= n; ++column)
         {
             if( rows == n ||  column == rows || column == 1 )
             printf("*");
             else
             printf(" ");
         }

      printf("\n");
   }
   return 0;
}

