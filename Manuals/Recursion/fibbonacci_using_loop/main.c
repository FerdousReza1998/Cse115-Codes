#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i ,num ,a=0, b=1 ,c ;

    printf("Enter a limit : ");
    scanf("%d" ,&num);

    printf(" Fibonacci series : ");

    printf("%d %d", a , b );

    for(i=3;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }




    return 0;
}
