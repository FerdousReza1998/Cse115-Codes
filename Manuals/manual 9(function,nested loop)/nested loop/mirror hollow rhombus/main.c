
/*

*****
 *   *
  *   *
   *   *
    *****

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ,i, j ;

    printf("enter n : ");
    scanf("%d" ,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
              printf(" ");
        }
       if(i==1||i==n)
       {
           for(j=1;j<=n;j++)
           {
               printf("*");
           }
       }


       else
       {
           printf("*");
           for(j=1 ; j<=3;j++)
           {
               printf(" ");
           }
           printf("*");
       }


        printf("\n");
    }
return 0;
}
