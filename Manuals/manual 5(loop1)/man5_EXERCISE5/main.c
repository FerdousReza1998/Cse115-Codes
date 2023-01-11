///Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m , n , i ;

    printf("Enter m : ");
    scanf("%d" , &m);
    printf("Enter n : ");
    scanf("%d" , &n);
    for(i=n ; i>=m ; i=i-1)
    {
        if(i%2==0)
        printf("%d ", i);
    }

    return 0;
}
