
/*

**********
**********
**********
**********
**********

*/



#include <stdio.h>

int main()
{
  int row, column, n,m ;

  printf("No. of rows:");

  scanf("%d", &n);
  printf("No. of coloumn:");

  scanf("%d", &m);

  for(row=1; row<=n; row++)
{

  for(column=1; column<=m; column++)

  {
    printf("*");
  }

    printf("\n");


}
    return 0;


 }
