///C program to compute sum of all natural numbers between m and n (using function)

#include <stdio.h>
#include <stdlib.h>

int sum(int,int);


int main()
{
    int x ,y ,s ;
    printf("Enter m : ");
    scanf("%d", &x);
    printf("Enter n : ");
    scanf("%d", &y);

    s = sum(x,y);

    printf(" sum = %d" ,s);
    return 0;
}

int sum( int a ,int b)
{

 int i , k = 0;

 for(i=a;i<=b;i++)
    {
    k= k+i;
    }

   return k;

}





