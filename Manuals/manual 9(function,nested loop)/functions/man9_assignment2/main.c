///Write a C code using functions that takes two integers: a and b as inputs and returns the value of a^b.

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int value(int ,int);


int main()
{
    int a ,b ,s;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    s = value(a,b);
    printf("answer = %d" ,s);

    return 0;
}

int value(int x ,int y)
{
    int result;

    result = pow(x,y);


    return result;
}





