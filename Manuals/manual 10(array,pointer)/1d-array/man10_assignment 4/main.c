///Write a program that reads the size and elements of an float array from user and then computes the
///average of the numbers in it and prints it. Then it should compute number of elements which are
///greater than average and prints those elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , num  ;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     float array[num], sum;

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%f" , &array[i]);
        }

       for(i=0 ; i<num ; i++)
        {
            sum=sum+array[i];
        }

        float avg = sum /num;

       /// printf("sum = %d" , sum);

        printf("\naverage = %f\n The elements greater than average are: " , avg);

        for(i=0 ; i<num ; i++)
        {
            if(array[i]>avg)
            {
                printf("%.3f " , array[i]);
            }

        }

    return 0;
}
