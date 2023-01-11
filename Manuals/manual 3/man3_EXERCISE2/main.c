///Write a C program that decides whether a person is eligible to work in a particular
///company or not. The company policy is: If the person’s age is between 25 and 45, s/he
///are eligible to work. Otherwise, your software should say “You are too young or too
///old”.


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a ;
   printf(" Enter your age : " );
   scanf("%d" , &a);

   if ( ( a >= 25) && ( a <= 45 )  )
   {
       printf(" you are eligible ");

   }
   else
   {
       printf(" You are too young or too old ");
   }



    return 0;
}
