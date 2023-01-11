#include <stdio.h>
#include <stdlib.h>

intmul(int , int );

int main()
{
    int m ,n ;

    printf("Enter first number : ");
    scanf("%d" , &m);

    printf("Enter second number : ");
    scanf("%d" , &n);

   int  result=intmul(m,n);

    printf("product is %d " , result);

    return 0;
}
intmul(int m, int n)
{
    if(n==1)
        return m;
    return  m +intmul(m,n-1);

}
