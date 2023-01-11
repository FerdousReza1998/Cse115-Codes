

///Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10,
///15, ...), only 11 (e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them
///(e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a ;
    printf(" input your number : " );
    scanf("%d" , &a );


    if( ( a%5 == 0 ) && ( a%11 == 0 ) )

    {
        printf(" this number is multiple of both 5 and 11 ");

    }
    else if ( a%5 == 0)
    {
        printf(" this number is multiple of  5  ");
    }

    else if ( a%11 == 0)
    {
        printf(" this number is multiple of  11");
    }

    else

    {
        printf(" this number is multiple of neither  5 and 11 ");
    }

    return 0;
}
