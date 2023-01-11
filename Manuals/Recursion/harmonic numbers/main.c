#include <stdio.h>
#include <stdlib.h>

double harmonic(int);

int main()
{
    int num;

    printf("Enter number ");
    scanf("%d" , &num);

    double result = harmonic(num);

    printf("%lf" , result);

    return 0;
}

double  harmonic(int n)
{
    if (n==1)
    {
        return 1;
    }

    return (1.0/n) +(harmonic(n-1));
}
