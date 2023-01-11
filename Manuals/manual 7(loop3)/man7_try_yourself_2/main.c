///Write a C program to read 3 integers and compute their LCM.
#include<stdio.h>
void main()
{
    int i, n1, n2, n3 , max, lcm=1;

    printf("Enter any three numbers to find LCM: ");
    scanf("%d %d %d", &n1, &n2 , &n3);

    if((n1>n2)&&(n1>n3))
    {
        i = max = n1;
    }
    else if(n2>n3)
    {
        i =  max = n2;

    }
    else
    {
        i = max = n3;
    }

      while(1)
        {


            if(i%n1==0 && i%n2==0 && i%n3==0)
            {
                lcm = i;
                break;
            }

            i = i + max;


        }

    printf("\nLCM of  %d  , %d and %d = %d\n", n1, n2 , n3, lcm);

    return 0;
}
