///Write a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    printf(" Displaying all decimal digits : ");

    for(i=9;i>=0;i=i-1)   /// i=i-1 or i-- or i-=1
    {
        printf("%d " , i);
    }

    return 0;
}
