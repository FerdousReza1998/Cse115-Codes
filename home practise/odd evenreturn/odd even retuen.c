
#include <stdio.h>
#include <stdlib.h>

 int oddeven(int);

 int res;

int main()
{
    int a ;
    printf("Enter an integer : ");

    scanf("%d" , &a);

    res = oddeven(a);  /// res = 1 / 2


    if( res == 1 )
    {
        printf("Even");
    }

    else if( res == 2 )
    {
        printf("Odd");
    }
}

int oddeven(int x)
{


    if(x%2 == 0)
    {
        res = 1;
        ///printf("Even");
    }

    else
    {
         res = 2;
        ///printf("Odd");
    }


    return res;
}
