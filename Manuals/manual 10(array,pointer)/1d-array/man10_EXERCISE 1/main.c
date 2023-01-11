///Write a program that prints all the indexes in which a search key appears.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,num ,value,flag=0 ,count =0,index=0;

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

        printf("\nEnter the value you want to search : ");
        scanf("%d", &value);

    //printf("\nindex of %d is : ", value);
        for(i=0; i<num; i++)
        {
            if (value==array[i])
            {
                count++;

                if(count==1)
                printf(" first index %d \n" , i);

                index=i;
                flag=1;
            }
        }

printf(" last index %d " , index);
        if(flag==0)
          printf("value not found");

    return 0;
}
