///C program to convert days to years weeks and days

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int input_day , years , weeks , days ;
   printf(" Enter days : ");
   scanf("%d" ,&input_day);

   years = input_day / 365 ;
   printf(" YEARS : %d ", years );

   weeks = ( input_day % 365) / 7 ;
   printf("\n WEEKS : %d ", weeks );

   days = input_day -  (( years*365)+( weeks*7));

   printf("\n DAYS : %d " , days);

    return 0;
}
