///Write C program using a function to check if a given number is a perfect number.

#include <stdio.h>
#include <stdlib.h>

void perfect(int);



int main()
{
    int number;

   printf("input a number to check  if it's a perfect number or not : ");
    scanf("%d", &number );

  perfect(number);

    return 0;
}

void perfect(int num)

{
    int i , sum =0;
    for(i=1 ; i<=num/2 ;i = i+1)
    {
        if(num%i==0)
        {
            sum =sum+i;
        }
    }
    if(sum==num)
    {
        printf(" It is a perfect number");
    }
    else
    {
       printf(" It is not a perfect number");
    }
}

