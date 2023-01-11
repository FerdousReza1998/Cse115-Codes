#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , num ;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }
        printf("after reversing the array \n");

         for(i=num-1 ; i>=0 ; i--)
        {
            printf(" %d " , array[i]);
        }
    return 0;
}
