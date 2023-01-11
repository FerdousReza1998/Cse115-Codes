///Write a C program to convert a given Binary number to its Decimal equivalent.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , sum = 0 , i ,base=1 , bin , k=0;

    printf("Enter a binary number : ");
    scanf("%d" ,&num);

     i = num;

    while(num != 0)
    {
       /// bin=num%10;


            if(num%10 == 1)
            {
               /// sum = sum + base;
               sum = sum + pow (2 , k);
            }


        num=num/10;

        ///base= 2*base;

       /// base = pow(2,k);
        k++;
    }

    printf("Decimal equivalent of %d is %d" , i , sum);
    return 0;
}
