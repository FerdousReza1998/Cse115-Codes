#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i=0 ,sum = 0 , num=1;
    printf("Enter n : ");
    scanf("%d" , &n);

    while(1)
    {
        num = num + 3*i;

         if(sum > n)
            break;

        sum = sum + num;
        i++;
    }


    printf("sum is %d" , sum);

    return 0;
}
