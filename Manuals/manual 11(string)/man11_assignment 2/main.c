///Write a C program to put even and odd elements of an array in two separate arrays and show them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , num ;
    printf("Enter size of  the array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Input elements in array:\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }

   printf("Even elements in the array : ");

      for (i = 0; i < num; i++)
        {
           if (array[i] % 2 == 0)
               {
                   printf("%d ", array[i]);
               }
        }


   printf("\nOdd elements in array: : ");

      for (i = 0; i < num; i++)
        {
           if (array[i] % 2 != 0)
               {
                   printf("%d ", array[i]);
               }
        }


    return 0;

}
