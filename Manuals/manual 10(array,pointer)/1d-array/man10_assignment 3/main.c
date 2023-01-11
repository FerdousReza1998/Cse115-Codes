///Write a C program to print the 2nd largest & 2nd smallest elements of an array.

#include <stdio.h>
#include <limits.h> /* For INT_MAX */

    void secondlargest(arr, size);
    void secondSmallest(arr, size);

int main()
{

    int  size, i ;

    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];


    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

     secondlargest(arr, size);
    secondSmallest(arr, size);

    return 0;
}


void secondlargest(int arr[], int size)
{
    int output,max,i;
     max = output = INT_MIN;


    for(i=0; i<size; i++)
    {
        if(arr[i] > max)
        {

            output = max;
            max = arr[i];
        }
        else if(arr[i] > output && arr[i] < max)
        {

            output = arr[i];
        }
    }
 if (output == INT_MIN)
        printf("There is no second largest element\n");
    else
    printf("The second largest element is %d\n", output);

}


void secondSmallest(int arr[], int arr_size)
{
    int i, min, output;

    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }

    min = output = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        /* If current element is smaller than min
           then update both min and output */
        if (arr[i] < min)
        {
            output = min;
            min = arr[i];
        }

        /* If arr[i] is in between min and output
           then update output  */
        else if (arr[i] < output && arr[i] > min)
            output = arr[i];
    }
    if (output == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The second Smallest element is %d\n",output);
}

