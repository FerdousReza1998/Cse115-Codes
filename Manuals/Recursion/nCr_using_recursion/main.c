#include <stdio.h>
#include <stdlib.h>

int nCr(int ,int );

int main()
{
    int n, r ,result;

    printf("Enter n ");
    scanf("%d",&n);
     printf("Enter r ");
    scanf("%d",&r);

    result = nCr(n,r);
    printf("nCr = %d" , result);
   return 0;
}

int nCr(int n,int r)

{
    int c;
    if(r==1)
    {
        return n;

    }
    else if (n==r)
    {
        return  1 ;
    }
    else
    {
       return nCr(n-1,r-1) + nCr(n-1,r);
    }
}
