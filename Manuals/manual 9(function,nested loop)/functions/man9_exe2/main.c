///C program to determine if a given number is odd/even using function

#include <stdio.h>
#include <stdlib.h>

 void oddeven(int);

int main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d" , &a);

    oddeven(a);
}

void oddeven(int x)
{

    if(x%2 == 0)
    {
        printf("Even");
    }

    else
    {
        printf("Odd");
    }
}
