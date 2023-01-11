#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i , num ,n1,n2;

     printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements : \n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }
        printf("\n Enter the number you want to replace : ");
        {
            scanf("%d" ,&n1);
        }


         printf("\n Enter the number which  you want to place : ");
        {
            scanf("%d" ,&n2);
        }


        for(i=0;i<num;i++)
        {
            if(array[i]==n1)
              {
                 array[i]=n2;
              }
        }
        printf("\n Updated array\n");

         for(i=0;i<num;i++)
           {
             printf("\n %d", array[i]);

           }


    return 0;
}
