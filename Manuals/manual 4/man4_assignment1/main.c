///Write a C program to check whether a year is a leap year or not, using switch case.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year ;

    printf("Enter year : ");
    scanf("%d", &year);

    switch(((year%4 == 0) && (year%100 !=0)) || (year%400==0))
    {
    case 1:
        printf("\n %d is a leap year" , year);
        break;
    default :
       printf("\n %d is  not a leap year" , year);
        break;
    }
    return 0;
}
