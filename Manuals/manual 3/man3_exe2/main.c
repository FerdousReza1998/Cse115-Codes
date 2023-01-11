///C program to find maximum among three numbers:


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x,y,z;

    printf("Enter three integer numbers : \n");
    scanf("%d %d %d", &x, &y, &z);

    if(x>y && x>z)
    {
    printf(" maximum number is : %d ", x);

    }
       else if (y>z)

    {
        printf(" maximum number is : %d ", y);
    }

    else

        printf(" maximum number is : %d ", z);

    return 0;
}
