#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main()
{
     int num;

    printf("Enter number ");
    scanf("%d" , &num);

     int result = sum(num);

    printf("%d" , result);

    return 0;
}


int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

        return(n+sum(n-1));

}
