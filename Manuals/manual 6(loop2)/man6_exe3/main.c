/// Write a C program to read an integer from user and
///count the total number of nonzero digits in it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, count = 0, count2 = 0;

   printf("Enter any integer: ");
    scanf("%d", &num);

   while(num != 0)
   {
     if (num%10 !=0)                                  ///if(num %10 ==0)
        {
            count++;  //count = count + 1

        }
   /*  else
     {
         count2++;    ///count2 = count2 + 1
     }
   */
       num=num/10;
   }

   printf("Total non-zero digits : %d" , count);
                                                      ///printf("\nTotal zero digits : %d" , count2);
    return 0;
}
