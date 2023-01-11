///Write a C program to check whether an input number is a perfect number or not. A perfect number is a positive
///integer which is equal to the sum of its proper positive factors. For e.g. 6 is a perfect number; because proper
///factors of 6 are 1, 2, 3 and 1+2+3 = 6. Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num , sum=0 ;

    printf("input a number to check  if it's a perfect number or not : ");
    scanf("%d", &num );

    i=1 ;
    do {
        if(num%i==0)
        {
            sum =sum+i;
        }
        i = i+1;
    }
    while(i<=num/2 );

    if(sum==num)
    {
        printf(" It is a perfect number");
    }
    else
    {
       printf(" It is not a perfect number");
    }
    return 0;
}
