///Write a C program to print the multiplication table (฀฀฀฀฀) of any given integer number.

#include <stdio.h>
#include <stdlib.h>

int main()
{ int i , n , sum=0 ;


    printf("Enter number to print the multiplication table of : ");
    scanf("%d" , &n);
     for(i=1 ; i<=10 ; i++)
     {
         sum=n*i;
         printf("%d * %d = %d\n" , n ,i , sum);
     }
    return 0;
}
