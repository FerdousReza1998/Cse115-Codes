
///Print the sum of the series:1+2+...+n; read n from user (Hint: 1+2+...+n= n(n-1)/2

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float n , sum ;

    printf(" Input n : ");
    scanf("%f", &n);

    sum = (n*(n+1))/2.0;
    printf(" The sum is :  %.3f " , sum);


    return 0;
}
