#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , sum = 0 , i ,base=1 , bin , k=0;

    printf("Enter a Octal number : ");
    scanf("%d" ,&num);

     i = num;

    while(num != 0)
    {
       /// bin=num%10;


            if(num%10 == 1)
            {
               /// sum = sum + base;
               sum = sum + ( 1 * pow (8 , k));
            }

            else if(num%10 == 2)
            {
               /// sum = sum + base;

               sum = sum + ( 2 * pow (8 , k));
            }

            else if(num%10 == 3)
            {
               /// sum = sum + base;

               sum = sum + ( 3 * pow (8 , k));
            }

            else if(num%10 == 4)
            {
               /// sum = sum + base;
               sum = sum + ( 3 * pow (8 , k));
            }

            else if(num%10 == 5)
            {
               /// sum = sum + base;
               sum = sum + ( 5 * pow (8 , k));
            }

            else if(num%10 == 6)
            {
               /// sum = sum + base;
               sum = sum + ( 6 * pow (8 , k));
            }

            else if(num%10 == 7)
            {
               /// sum = sum + base;
               sum = sum + ( 7 * pow (8 , k));
            }


        num=num/10;

        ///base= 2*base;

       /// base = pow(2,k);
        k++;
    }

    printf("Decimal equivalent of %d is %d" , i , sum);
    return 0;
}
