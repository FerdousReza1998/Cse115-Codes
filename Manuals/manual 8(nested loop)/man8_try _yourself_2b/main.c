/*

*
**
* *
*  *
*   *
*    *
*******



*/

#include <stdio.h>

int main()
{
  int row, column, n;

  printf("Enter height of a right angle triangle : ");

  scanf("%d", &n);


  for(row=1; row<=n; row++)
{

  for(column=1; column<=row; column++)
   {



      if(row==n||column==1||column==row )
     {
      printf("*");
     }

      else
      {
        printf(" ");
      }


   }

     printf("\n");

   }

  return 0 ;

}




