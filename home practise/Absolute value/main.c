#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , result;
    printf("enter a number : ");
    scanf("%d" , &num);


     result = abs(num);

    printf(" Absolute value = %d" , result);
    return 0;
}
