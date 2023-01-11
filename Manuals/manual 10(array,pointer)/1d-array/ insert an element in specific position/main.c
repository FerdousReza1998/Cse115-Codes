#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , num ,  element ,position ;

     printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num+1];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }

        printf("Enter the element you want to insert\n");
        scanf("%d" , &element);

        printf("Enter its position\n");
        scanf("%d" , &position);
        position=position-1;

        for(i=num-1;i>=position;i--)
        {
            array[i+1]=array[i];
        }

        array[position]=element;

        for(i=0;i<=num ;i++)
        {
          printf("%d ",array[i]);
        }

    return 0;
}
