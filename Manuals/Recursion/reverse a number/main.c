#include <stdio.h>
#include <stdlib.h>

int reverse(int);

int main()
{
    int num , result;

    printf("Enter n : ");
    scanf("%d" , &num);

    result = reverse(num);
     printf("reverse of %d is %d ", num ,result);

    return 0;
}

int r , sum =0;

int reverse(int n)
{
    if(n>0)
    {
        r=n%10;
        sum = sum*10+r;
        reverse(n/10);

    }
     else
        return sum;

     return sum;
}



