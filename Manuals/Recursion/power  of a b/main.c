#include <stdio.h>
#include <stdlib.h>

int power(int , int );

int main()
{
    int m ,n ;

    printf("Enter first number : ");
    scanf("%d" , &m);

    printf("Enter second number : ");
    scanf("%d" , &n);

    printf("%d ", power( m ,n ));

    return 0;
}
int power(int m, int n)

{
    if(n==0)
        return 1;
    else
        return(m*power(m,n-1));
}




