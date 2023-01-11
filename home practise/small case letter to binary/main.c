#include <stdio.h>
#include <stdlib.h>

int main()
{
      char lower , higher ;
      int sum=0, k=0 ,i ,number  ;

     printf("%d" , lower);

    printf("enter a small letter : ");
    scanf("%c" , &lower);

    higher= lower - 32;

    printf(" The higher case is : %c \n" , higher);

    number=(int)lower;
    i= number;

    while(number !=0)
    {
        if(number%2==1)
        {
            sum=sum+pow(10,k);
        }
        number = number/2;
        k++;
    }

    printf(" binary form of %c is : %d \n" , lower , sum);

    return 0;

}
