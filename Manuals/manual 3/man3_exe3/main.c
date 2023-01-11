///C program to check Leap Year (a year is a leap year if – (i) it is divisible by 4 but not divisible
///by 100 OR (ii) it is divisible by 400):


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year ;
    printf( "Enter the year : ");
    scanf("%d" , &year);

    if  ( ( (year%4 == 0) && (year%100 != 0) )  || (year%400 == 0) )

    {
        printf(" %d  is a leap year " , year);
    }
    else
    {
        printf(" %d  is not a leap year " , year);
    }


/*
if(year%400==0)
{
    printf("%d is a leap year\n ", year);
}

 else if ((year%4 == 0) && (year%100 != 0))
{
    printf("%d is a leap year\n ", year);
}
else
    {
        printf(" %d Is is not a leap year\n" , year );
    }
*/
    return 0;
}
