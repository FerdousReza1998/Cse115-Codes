///Ask user for two integers a and b. Then swap (interchange) the values of a and b. That means, a
///should get the value of b and b should get the value of a.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,Temporary;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    Temporary = a;
    a = b ;
    b = Temporary;


    printf("After swapping , a: %d and b: %d" , a , b);


   /// printf("\nAfter swapping , a: 5 and b: 7");

    return 0;
}
