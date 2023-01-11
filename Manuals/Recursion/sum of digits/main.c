#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int);


int main()
{
     int num;

    printf("Enter number ");
    scanf("%d" , &num);

     int result = sumOfDigits(num);

    printf("%d" , result);

    return 0;
}

int sumOfDigits(int x)
{
    if(x/10==0)
    {
      return x;
    }

      return x%10 + sumOfDigits(x/10);

}




