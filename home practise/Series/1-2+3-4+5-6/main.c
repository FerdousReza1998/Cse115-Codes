#include <stdio.h>
#include <stdlib.h>

/// sum = 1-2+3-4+5-6.....n
///sum=(1+3+5+....)-(2+4+6+...)



int main()
{
    int n ,i ,sum =0;


    printf("Enter n : ");
    scanf("%d" , &n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum = sum-i;

        }
        else
        {
            sum=sum+i;
        }
    }

     printf("sum = %d" , sum);

    return 0;
}
