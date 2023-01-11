///count how many times a number is present  in an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , num ,count=0 ,n;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }


     printf("Enter the number you want to count : ");
     scanf("%d",&n);

     for(i=0 ; i<num ; i++)
        {
            if(array[i]==n)
                count++;
        }

     printf("count = %d" ,count);



    return 0;
}
