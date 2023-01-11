///Passing array as an argument of a function:

#include <stdio.h>
#include <stdlib.h>

float getaverage(int arr[],int num);

int main()
{
    int i , num ;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int balance[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &balance[i]);
        }

        float avg =getaverage(balance,num);
		
         printf("Average is: %f ", avg);

    return 0;

}


float getaverage(int arr[],int num)
{
    int i;
    float avg, sum=0;

    for(i=0 ; i<num ; i++)
        {
            sum=sum+arr[i];
        }

     avg = sum /num;

        return avg;
}
