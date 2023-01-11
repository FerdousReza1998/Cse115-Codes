///Write a C program to read an integer from user and output its last and first digit. Hint: Like practice 2 & 3,
///reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,last  , first;

    printf("Enter a number : ");
    scanf("%d" , &num);

   last = num%10;
   /// printf(" last digit :  %d" ,last);


   while(num!=0)
   {
       first = num;
       num = num/10;
   }
      printf(" first digit :  %d\n" ,first);
      printf(" last digit :  %d" ,last);




    return 0;
}
