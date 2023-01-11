///Write a C program to find Least Common Multiple (LCM) of two given numbers.


#include <stdio.h>
void main()
{
    int i, n1, n2, max, lcm=1;

    printf("Enter any two numbers to find LCM: ");
    scanf("%d %d", &n1, &n2);

    i = max = (n1>n2) ? n1 : n2;

        while(1)
        {


            if(i%n1==0 && i%n2==0)
            {
                lcm = i;
               break;

            }

            i = i + max;


        }

    printf("\nLCM of %d and %d = %d\n", n1, n2, i);
}
