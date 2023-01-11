#include <stdio.h>
#include <stdlib.h>

int main()


{
    int i ,n ,count=0 ;
   printf("enter n ");
    scanf("%d" , &n);

  for(i =0 ; i<=n ; i++)
  {
      if(i%2!=0)
      {
          count++;
           printf("%d " ,i);
      }

  }
printf(" \n number of odd numbers are \n%d " ,count);
    return 0;
}
