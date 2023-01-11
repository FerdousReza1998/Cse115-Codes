/*

****
*  *
*  *
****


*/


#include <stdio.h>

int main()

{

 int row, column, N =5;

  printf("No. of rows:");
   scanf("%d", &N);

   for(row=1; row<=N; row++)
 {
     for(column=1; column<=N; column++)
  {

   if(row==1||row==N||column==1||column==N )
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
