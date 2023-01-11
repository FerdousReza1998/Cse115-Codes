///Write a C program that prints all even numbers between m and n (m,n are user inputs) except the ones
///which are divisible by 3. [Hint: Use continue statement within a loop] Sample input/output:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, m ,n  ,count=0;

    printf("Enter m: ");
    scanf("%d" , &m);
    printf("Enter n: ");
    scanf("%d" , &n);
printf("All even numbers between %d and %d except those divisible by 3 are:" , m ,n);
    for(i=m ; i<=n ; i++)
    {
        if(i%2==0)
        {
            if(i%3==0)
            {

                continue;
            }

          count++;
          printf("%d" ,count);

        }

  ///  printf(" %d" , i);

    }

    return 0;
}
