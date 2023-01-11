///Print the sum of the series:12+22+...+n2; read n from user.


#include<stdio.h>
#include<math.h>

int main()
{
    float n , sum ;

    printf(" Input n : ");
    scanf("%f", &n);

    sum = (n*(n+1)*(2*n+1))/6.0 ;

    printf(" The sum is : %.3f " , sum);


    return 0;
}
