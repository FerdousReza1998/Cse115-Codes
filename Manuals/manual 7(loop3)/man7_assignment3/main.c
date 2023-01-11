///Write a C program to convert a given decimal number to its binary equivalent.

#include <stdio.h>

void main()
     {
     int input,  binary=0,decimal,k=0;


     printf("Enter a number to convert Decimal to Binary : ");
     scanf("%d",&input);

     decimal=input;

      while(input != 0)
       {
           if(input%2 == 1)
            {
             binary = binary + pow (10 , k);
            }

         input = input / 2;

         k++;
       }

     printf("\nThe Binary of %d is %d.\n\n",decimal,binary);
 }
