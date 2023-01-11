#include <stdio.h>
#include <stdlib.h>

/// octal to hexa

int main()
{
    int number;

    printf("Enter a octal number : ");
    scanf("%o", &number);

    printf("Hexa decimal number = %x", number);
    getchar();
    return 0;
}


/*


///hexa to octal

int main()
{
    int number;

    printf("Enter a  hexa decimal number : ");
    scanf("%x", &number);

    printf(" octal number = %o", number);

    getchar();
    return 0;
}
*/

