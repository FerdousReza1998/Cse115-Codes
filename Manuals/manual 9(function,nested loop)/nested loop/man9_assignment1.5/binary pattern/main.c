#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , row ,column ;

   printf("enter n : ");
   scanf("%d" , &n);

   for(row=1 ; row <=n ; row++)
   {
       for(column=1 ; column<= n-row; column++)
       {
           printf(" ");

       }

       for(column=0; column<row ; column++)
       {
           printf("%d" , column%2);
       }
       printf("\n");
   }


    return 0;
}
