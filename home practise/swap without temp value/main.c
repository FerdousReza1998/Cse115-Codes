#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2;

    printf("Enter 1st number : ");
    scanf("%d" ,&num1);

    printf("Enter 2nd number : ");
    scanf("%d" ,&num2);


    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("After swaping\n\n");

     printf("1st number: %d\n" , num1);

     printf("2nd number: %d\n" , num2);

    return 0;
}
