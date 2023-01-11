///C Program to find the largest value in a float type array:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n ,max_id=1;                  /// to find index max_id=0 ,  max_id=i;

    printf("No. of elements: ");
    scanf("%d",&n);

   float arr[n], max;

    printf("Enter %d numbers: ",n);

    for(i=0; i<n; ++i)
      {
        scanf("%f",&arr[i]);
      }

     max = arr[0];
     for(i=1; i<n; ++i)
        {

          if(max < arr[i])
           {
             max=arr[i];
             max_id=i+1;

           }

        }

     printf(" maximum = %.2f",max);
    printf(" position = %d",max_id);
     return 0 ;

}

