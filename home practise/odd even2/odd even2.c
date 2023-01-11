#include<stdio.h>

int main ()
{
    int n;
    scanf("%d" ,&n);

    ( n%2==0) ?  printf(" Even") : printf(" Odd");

    ( n%2!=0) ?  printf(" Odd") : printf(" Even");
}
