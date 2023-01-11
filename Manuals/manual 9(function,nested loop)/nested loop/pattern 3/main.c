/*


1
2 4
3 6 9
4 8 12 16
5 10 15 20 25


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
        for(column=1 ; column<=row;  column++)
        {
            printf("%d " ,column*row);
        }

       printf("\n");

    }
   return 0;
}
