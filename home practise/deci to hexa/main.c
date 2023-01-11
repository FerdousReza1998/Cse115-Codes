#include <stdio.h>
#include <stdlib.h>

/// deci to hexa

int main()
{
    int number;

    printf("Enter a decimal number : ");
    scanf("%d", &number);

    printf("Hexa decimal number = %x", number);
    getchar();
    return 0;
}


/*

///hexa to deci

int main()
{
    int number;

    printf("Enter a  hexa decimal number : ");
    scanf("%x", &number);

    printf(" Decimal number = %d", number);

    getchar();
    return 0;
}

*/
