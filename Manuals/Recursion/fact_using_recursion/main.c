#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main()
{
    int  num;
    printf("Enter a number : ");
    scanf("%d" ,&num);

    int result = fact(num);
    printf("Factorial of %d is %d" ,num,result);

    return 0;
}

int fact(int n )
{
    if(n==1)
    {
        return 1 ;
    }
    else
    {
        return  n*fact(n-1);
    }
}
