
///Write a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user.#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n , r ,sum=1;


    printf("Enter n : ");
    scanf("%d" , &n);
    printf("Enter r : ");
    scanf("%d" , &r);

    printf("nPr = ");
    for(i=0 ; i<=r-1 ; i=i+1 )
    {
        /// n-r+1 = n-(r-1), thats why loop condition ends at r-1 , i <= r-1
        /// n = (n-0). thats why i starts from 0 , i=0

        /// at first step , sum = sum * (n - 0)
        /// at final step , sum = sum * (n - (r-1))
        sum=sum*(n-i);

        printf("%d " , n-i);
    }
    printf("\nSum = %d" , sum);
    return 0;
}
