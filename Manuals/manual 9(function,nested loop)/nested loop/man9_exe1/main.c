
/*

    *
   * *
  * * *
 * * * *
* * * * *

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
              printf("* ");
          }

       printf("\n");

///space--;
 }
  return 0;
}
