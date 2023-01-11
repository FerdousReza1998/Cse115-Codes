#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i , num , count1 =0 ,count2=0,count3=0;

    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }


        for(i=0;i<num;i++)
        {
            if(array[i]>0)
                count1++;

            else if(array[i]<0)
                count2++;
            else
                count3++;
        }
        printf("\n Positive = %d \n Negative = %d\n Zeros = %d" ,count1,count2,count3);

    return 0;
}
