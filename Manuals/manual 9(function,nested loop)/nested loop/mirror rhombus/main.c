/*

*****
 *****
  *****
   *****
    *****

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,row ,col ,k;

    printf("enter n : ");
    scanf("%d" ,&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<row;col++)
        {
              printf(" ");
        }
        for(k=1;k<=n;k++)
        {
              printf("*");
        }
        printf("\n");
    }


    return 0;
}
