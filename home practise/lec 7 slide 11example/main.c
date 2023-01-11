#include <stdio.h>
int factorial(int x);
int nCr(int,int);

int main()
{
    int N, R;
    int result;
    int i;
    printf("Enter N and R\n");
    scanf("%d%d",&N,&R);
     result = nCr(N,R);
    printf("%d combination %d = %d",N,R,result);
    return 0;
}

int factorial(int x)
{
    int fact = 1, i;
    for(i=1;i<=x;i++)
        fact *= i;
    return fact;
}

int nCr(int n,int r)
{
   int  result = factorial(n)/(factorial(r)*factorial(n-r));

    return result ;
}

