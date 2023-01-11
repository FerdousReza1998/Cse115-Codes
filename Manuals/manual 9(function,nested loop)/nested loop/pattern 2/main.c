/*

    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row , column , n;
    printf("Enter n : ");
    scanf("%d" ,&n);

    for(row=1; row <=n ; row++)
    {
        for(column=1 ; column<=n-row;  column++)
        {
            printf(" ");
        }
        for(column=1 ; column<=row  ; column++)                             
        {
            printf("%d", column);
        }
        for(column=row-1 ; column>=1  ; column--)
        {
            printf("%d", column);
        }

         printf("\n");
    }


      for(row=n-1 ; row >=1 ; row--)
    {
        for(column=1 ; column<=n-row;  column++)
        {
            printf(" ");
        }
        for(column=1 ; column<=row  ; column++)
        {
            printf("%d", column);
        }
        for(column=row-1 ; column>=1  ; column--)
        {
            printf("%d", column);
        }

         printf("\n");
    }




    return 0;
}
