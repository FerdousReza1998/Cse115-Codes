/*


        A
       ABC
      ABCDE
     ABCDEFG
    ABCDEFGHI




*/




#include <stdio.h>

int main()
{
int rows, column, n;
char A;
printf("Enter no. of n: ");
scanf("%d",&n);

///int space=n-1;

for(rows=1; rows<=n; rows++)
 {



      for(column=1;column<=n-rows; column++)
          {
              printf(" ");
          }
      for(column=1; column<=2*rows-1; column++)
          {
             printf("%c",(char)(column+64));
          }

       printf("\n");

///space--;
 }
  return 0;
}
