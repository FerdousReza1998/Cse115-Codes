
/*


    A
   A B
  A B C
 A B C D
A B C D E



*/


#include <stdio.h>

int main()
{
int rows, column, n;

printf("Enter no. of n: ");
scanf("%d",&n);

///int space=n-1;

for(rows=1; rows<=n; rows++)
 {



      for(column=1;column<=n-rows; column++)
          {
              printf(" ");
          }
      for(column=1; column<=rows; column++)
          {
             printf("%c ",(char)(column+64));
          }

       printf("\n");

///space--;
 }
  return 0;
}
