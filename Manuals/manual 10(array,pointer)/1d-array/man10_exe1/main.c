///C Program that prints the odd & the even numbers in an array separately:

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

   printf("Even numbers in the array are : ");

      for (i = 0; i < num; i++)
        {
           if (array[i] % 2 == 0)
               {
                   printf("%d ", array[i]);
               }
        }


   printf("\nodd numbers in the array are : ");

      for (i = 0; i < num; i++)
        {
           if (array[i] % 2 != 0)
               {
                   printf("%d ", array[i]);
               }
        }


    return 0;

}
