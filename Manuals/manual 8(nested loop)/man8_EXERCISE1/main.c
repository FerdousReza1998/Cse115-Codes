

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
    int row , column , n;

    printf("Enter rows : ");
    scanf("%d" ,&n);


    for(row=1; row<=n; row++)
   {
        for(column=1; column<=n- row; column++)
           {
            printf(" ");
           }

        for(column=1; column<=n; column++)
            {
                if(row==1 || row==n || column==1 ||column==n)
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
