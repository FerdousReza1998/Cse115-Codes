///Write a program that computes the following series using for loop: 10000+2000+400+…+16

#include <stdio.h>
#include <stdlib.h>

int main()
{ int i , sum=0 ;
    printf("The series are :");
    for(i=10000;i>=16 ; i=i/5)
    {
        sum=sum+i;
        printf("%d " , i);
    }
    printf(" \nthe sum is : %d" , sum);
    return 0;
}
