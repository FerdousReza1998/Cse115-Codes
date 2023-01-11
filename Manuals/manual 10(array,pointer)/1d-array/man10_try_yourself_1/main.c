///Write a program that prints the no. of odd & no. of even numbers in an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , num , count1 = 0 ,count2 = 0;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }



      for (i = 0; i < num; i++)
        {
           if (array[i] % 2 == 0)
               {
                  count1++;
               }
           else
              {
                  count2++;
              }
        }

      printf(" no: of  Even numbers in the array are: %d " , count1);
     printf(" \n no: of  Odd numbers in the array are: %d " , count2);

    return 0;

}
