///Write a C program to enter month number and print number of days in month


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int month_number;

    printf(" input month number : ");
    scanf("%d" , &month_number  );



        if(month_number ==2  )
       {

       printf("it has 28/29 days");
       }

        else if ( (month_number==6) || (month_number==4) || (month_number==9) || (month_number==11)  )

        {


        printf("it has 30 days");
        }
     else
     {
        printf("it has 31 days");
     }
    return 0;
}
