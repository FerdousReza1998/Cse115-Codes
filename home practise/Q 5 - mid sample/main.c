
#include <stdio.h>
#include <stdlib.h>

int nCr(int ,int);
int factorial(int x);

int main()
{
   float i  ,n , r ,ncr=1;

    printf("Enter the value of N : ");
    scanf("%f" , &n);


      printf("The coeff. Series is :\n");
	  
        for(i=0;i<=n ;i++)
     {
        ncr = nCr(n ,i);
        printf("%.0f " ,ncr);

      //  printf("%.0f " ,nCr(n ,i));

     }
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
