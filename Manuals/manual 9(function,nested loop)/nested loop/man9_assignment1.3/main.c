/*

1
23
456
7890
12345


*/



#include <stdio.h>

int main()
{
  int rows, column, n , count = 0 ;

  printf("Enter height of a right angle triangle : ");

  scanf("%d", &n);


  for(rows=1; rows<=n; rows++)
{

  for(column=1; column<=rows; column++)
   {

      printf("%d",  ++count);


      if(count > 9)
         {
             count = 0; ///num = num%10;
         }


   }

     printf("\n");

   }

  return 0 ;

}




