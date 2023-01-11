/*


     0
    01
   010
  0101
 01010


*/


#include <stdio.h>

int main()
{
  int row, column, n , num = 0;

  printf("Enter height of a right angle triangle : ");

  scanf("%d", &n);

  for(row=1; row<=n; row++)
   {
       num = 0;

        for(column=1; column<=n- row; column++)
           {
            printf(" ");
           }


        for(column=1; column<=row; column++)
            {

            printf("%d", num);
            num =num+1;

          if(num > 1)
           num = 0; ///num = num%10;

            }
              printf("\n");
   }
 return 0;
}
