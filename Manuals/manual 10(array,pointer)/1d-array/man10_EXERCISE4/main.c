///Write a program that prints ALL indexes in which the smallest value of array is present.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,num ,min ;

    printf("Enter size of array : ");
    scanf("%d", &num);

    int array[num];
    printf("Enter its element : ");

    for (i=0; i<num; i++)

       {
        scanf(" %d" , &array[i]);
       }
  printf(" Elements are : ");

    for (i=0; i<num; i++)

         {
          printf("%d " , array[i]);
         }

       min = array[0];

      for(i=1; i<num; ++i)
        {
         if(min > array[i])
             {
                 min=array[i];
             }
        }

    printf("\nindex of %d is : ", min);
        for(i=0; i<num; i++)
        {
            if (min==array[i])
            {
                printf("  %d " , i);


            }

        }


    return 0;
}
