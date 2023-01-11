#include <stdio.h>
#include <stdlib.h>

/// decimal to octal

int main()
{
    int number;

    printf("Enter a decimal number : ");
    scanf("%d" ,&number);

    printf("octal number : %o" , number);
    getchar();
    return 0;
}


/*

/// octal to deci

int main()
{
    int number;

    printf("Enter a octal number : ");
    scanf("%o" ,&number);

    printf("decimal number : %d" , number);
    getchar();
    return 0;
}

*/
