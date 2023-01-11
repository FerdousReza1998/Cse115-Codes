/*

    A
   B B
  C C C
 D D D D
E E E E E



*/



#include <stdio.h>

int main()
{
int rows, column, n ;

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
             printf("%c ",(char)(rows+64));
          }

       printf("\n");

///space--;
 }
  return 0;
}
