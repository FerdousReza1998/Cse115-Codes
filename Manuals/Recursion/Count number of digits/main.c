#include <stdio.h>
#include <stdlib.h>
int count(int);

int main()
{
    int n , c;

    printf("Enter a number : ");
    scanf("%d",&n);

    c =count(n);
     printf("number of digits are = %d" , c);
    return 0;
}
int count(int n)
{
     static int c=0 ;
    if(n==0)
    {
        return c ;
    }
    else
    {
        c++;
        return count(n/10);
    }
}
