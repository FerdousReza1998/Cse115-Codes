///Find the sum of the following series using a function: 1^2 + 2^2 + 3^2 + … + N^2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int series(int);

int main()
{
    int  n ,s ;

    printf("Enter n : ");
    scanf("%d" ,&n);

    s = series(n);
    printf(" sum = %d" ,s);
    return 0;
}


int series( int x)
{
    int i , sum=0;

    for(i=1 ; i<=x ; i++)
    {
        ///i=pow(i,2);
        sum = sum+pow(i,2);

    }


    return sum;


}



