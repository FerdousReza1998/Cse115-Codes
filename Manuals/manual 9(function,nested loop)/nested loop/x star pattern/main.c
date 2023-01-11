/*

*   *
 * *
  *
 * *
*   *


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row , column , n;

    printf("enter n : ");                                ///5.160 anis
    scanf("%d" , &n);

    for(row=1 ; row<=n;row++)
    {
        for(column =1 ; column<=n; column++)
        {
             if(row==column||row+column==n+1)
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
    return 0;
}
