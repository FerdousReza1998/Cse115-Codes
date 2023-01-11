#include <stdio.h>
#include <stdlib.h>

void decitobin(int);


int main()
{
    int num;
    printf("Enter a decimal number : ");
    scanf("%d" , &num);

    decitobin(num);

    return 0;
}

void decitobin(int n)
{
    if(n==1)
    {
        printf("1");

    }
    else
    {
        decitobin(n/2);
         printf("%d" , n%2);
    }
}
