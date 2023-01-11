#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , num  , sum;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }

       for(i=0 ; i<num ; i++)
        {
            sum=sum+array[i];
        }

        float avg = sum /num;

        printf("sum = %d" , sum);

        printf("\naverage = %.3f" , avg);

    return 0;
}
