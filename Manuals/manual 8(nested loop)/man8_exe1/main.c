/*

****
****
****
****

*/



#include <stdio.h>

int main()
{
  int row, column, N ;

  printf("No. of rows:");

  scanf("%d", &N);


  for(row=1; row<=N; row++)
{

  for(column=1; column<=N; column++)

  {
    printf("*");
  }

    printf("\n");


}
    return 0;


 }
