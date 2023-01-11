///Write a C program to print all the odd factors of a given number.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num ;

    printf("Enter the number to find its factor : ");
    scanf("%d", &num );

  printf(" odd factors of %d are : " ,num);
    for(i=1 ; i<=num/2 ;i = i+1)
        {
            if(num%i==0)  ///for checking all factors
            {
                /// printf(" \n all %d " , i);
                            if(i%2 != 0) //for checking odd of factors
                            {
                                printf(" %d " , i);
                            }


            }

        }

    return 0;
}
