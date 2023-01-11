
/*


**********
*        *
*        *
*        *
**********


*/



#include <stdio.h>

int main()
{
  int row, column, n,m ;

  printf("No. of rows:");

  scanf("%d", &m);
  printf("No. of coloumn:");

  scanf("%d", &n);

  for(row=1; row<=m; row++)
{

  for(column=1; column<=n; column++)
   {



      if(row==1||row==m||column==1||column==n )
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




