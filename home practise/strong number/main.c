#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num , sum =0 ,rem ,temp ,fact;

    printf("Enter an integer : ");
    scanf("%d", &num);

    temp=num;

    while(temp!=0)
    {
        rem =temp%10;
        fact =1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum = sum+fact;
        temp=temp/10;


    }


    if(sum==num)
    {
        printf("%d is a strong number" , num);
    }
  else
    {
        printf("%d is not  a strong number" , num);
    }
    return 0;
}
