#include <stdio.h>

int main()
{
  int rows, column, n , count = 0 ;

  printf("Enter height of a right angle triangle : ");

  scanf("%d", &n);


  for(rows=n; rows>=1; rows--)
{

  for(column=1; column<=2*rows-1; column++)
   {

            if(rows%2==0 && n%2!=0)
                  printf("%c",43); //++

            else if(rows%2!=0 && n%2!=0)
                 printf("%c",42); //**

            else if(rows%2==0  && n%2==0 )
                  printf("%c",42);
            else
                 printf("%c",43);



   }

     printf("\n");

   }

  return 0 ;

}




