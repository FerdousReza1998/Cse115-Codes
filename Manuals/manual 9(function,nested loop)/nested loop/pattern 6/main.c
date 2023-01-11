/*

ABCDE
FGHI
JKL
MN
O

*/

#include <stdio.h>
#include <stdlib.h>
void pattarn(int);

int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d" ,&n);

    pattarn(n);

    return 0;
}
void pattarn(int n)

{
    int rows,column , k;

    for (rows = n; rows >=1 ; rows--)
   {
           // k=rows;

      for (column = 1; column <=rows; column++,k++)
         {
             printf("%c" , (char) k+65);
         }

      printf("\n");
   }

}
