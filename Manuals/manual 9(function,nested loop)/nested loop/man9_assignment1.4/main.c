

/*


     1
    234
   56789
  0123456
 789012345



*/



#include <stdio.h>

int main()
{
int rows, column, n ,count=1;

printf("Enter no. of n: ");
scanf("%d",&n);

///int space=n-1;

for(rows=1; rows<=n; rows++)
 {


      for(column=1;column < n-rows; column++)
          {
              printf(" ");
          }
      for(column=1; column<=2*rows-1; column++)
          {
            printf("%d", count++);


          if(count > 9)
           {
               count = 0; ///num = num%10;
           }
          }

       printf("\n");

///space--;
 }
  return 0;
}
