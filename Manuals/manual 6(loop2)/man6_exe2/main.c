///Write a C program to read an integer from user
///and count the total number of digits in it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , count=0;

    printf("Enter any integer:\n");
    scanf("%d" , &num);


   do {
        count=count+1;
        num=num/10;

    }
     while(num!=0);
    printf("Total digits : %d" , count);
    return 0;
}
