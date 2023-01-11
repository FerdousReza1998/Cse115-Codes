#include <stdio.h>
int main()
{
    int n,i ;
    int  sum = 0;
    char sign = 'p';

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i = i+2)
    {

        if(sign == 'p')
        {
            sum = sum + i;
            sign = 'n';
        }

        else if(sign == 'n')
        {
           sum = sum - i;
           sign = 'p';
        }

    }

    printf("Sum = %d", sum);

    return 0;
}
