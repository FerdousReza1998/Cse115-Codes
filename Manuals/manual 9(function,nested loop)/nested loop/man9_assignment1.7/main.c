


/*



    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *



*/




#include <stdio.h>

int main()
{
  int rows, column, n , num = 1,k ;

  printf("Enter height of a right angle triangle : ");

  scanf("%d", &n);


  for(rows=1; rows<=n; rows++)
{

  for(column=1; column<=rows; column++)
   {

      printf("*");
   }

     printf("\n");

}


 for(rows=n-1; rows >= 1; --rows)
{

  for(column=1 ; column<=rows ; column++)
   {

      printf("*");
   }


     printf("\n");

}


  return 0 ;

}




