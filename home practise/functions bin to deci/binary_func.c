
#include <stdio.h>
#include <stdlib.h>

void binary( int num)
{
    int sum = 0 , i ,base=1 , bin , k=0;


     i = num;

    while(num != 0)
    {
       /// bin=num%10;


            if(num%10 == 1)
            {
               /// sum = sum + base;
               sum = sum + ( 1 * pow (2 , k));
            }


        num=num/10;

        ///base= 2*base;

       /// base = pow(2,k);
        k++;
    }

    printf("Decimal equivalent of %d is %d\n" , i , sum);


}


int main(){

int num;
   printf("Enter a binary number : ");
    scanf("%d" ,&num);

    c = a+b;

  binary(10110);
    binary(num);
    binary(1110);

return 0;
}
