///Write a program that takes a minimum number, a maximum number, and common difference and prints
///the sum of the arithmetic series between them.

#include <stdio.h>
#include <stdlib.h>

int main()
{ int n ,m , k ,i , sum =0 ;

    printf("Enter minimum : ");
    scanf("%d" , &n);
    printf("Enter maximum : ");
    scanf("%d" , &m);
    printf("Enter the difference : ");
    scanf("%d" , &k);

    for(i=n ;i<=m ; i=i+k)
    {
        sum=sum+i;
        printf(" %d",i);
    }
    printf("\nThe sum : %d" , sum);
    return 0;
}
