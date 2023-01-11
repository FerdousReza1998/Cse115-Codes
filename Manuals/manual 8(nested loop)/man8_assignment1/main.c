/*

       **********
      *        *
     *        *
    *        *
   **********

*/


#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int row , column , n ,m;

    printf("Enter rows : ");
    scanf("%d" ,&n);
    printf("Enter coloumn : ");
    scanf("%d" ,&m);

    for(row=1; row<=n; row++)
   {
        for(column=1; column<=n- row; column++)
           {
            printf(" ");
           }

        for(column=1; column<=m; column++)
            {
                if(row==1 || row ==n || column==1 ||column==m)
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
