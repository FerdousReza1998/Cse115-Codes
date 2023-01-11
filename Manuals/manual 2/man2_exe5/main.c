///C program to print the last digit of a number and all the other digits of it:

#include <stdio.h>
#include <math.h>

int main()

{
    int num, lastNumber ,otherNumber ;

    printf(" Enter an integer number : ");

    scanf("%d",&num);

    lastNumber = num %10 ;

    otherNumber = num/10 ;


     printf(" last digit is : %d \n" , lastNumber);
     printf(" Other digits are : %d " , otherNumber);


    return 0;
}
