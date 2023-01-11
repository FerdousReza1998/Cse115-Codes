/*

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
int row, column, n;
printf("Enter no. of n: ");
scanf("%d",&n);

///int space=n-1;

for(row=1; row<=n; row++)
 {



      for(column=1;column<=n-row; column++)
          {
              printf(" ");
          }
      for(column=1; column<=row; column++)
          {
              printf("%d " ,column);
          }

       printf("\n");

///space--;
 }
  return 0;
}
