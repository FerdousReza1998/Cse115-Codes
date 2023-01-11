///Write a program that prints ALL indexes in which the largest value of array is present.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,num ,max ;

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

       max = array[0];

      for(i=1; i<num; ++i)
        {
         if(max < array[i])
              max=array[i];
      }
    printf("\nindex of %d is : ", max);
        for(i=0; i<num; i++)
        {
            if (max==array[i])
            {
                printf("  %d " , i);


            }

        }


    return 0;
}
