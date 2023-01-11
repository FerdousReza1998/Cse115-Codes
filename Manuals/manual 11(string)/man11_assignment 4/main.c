///Write a function that returns the number of times a value appears in an array.

#include <stdio.h>
#include <stdlib.h>

int countSearchKey( int array[],int num,int key);

int main()
{
   int i , num ,count=0 ,key; 
   
    printf("Enter array size : ");
     scanf("%d" , & num);
	 
     int array[num];

     printf("Array elements\n");
     for(i=0 ; i<num ; i++)
        {
            scanf(" %d" , &array[i]);
        }

     printf("Search key : ");
     scanf("%d",&key);

     count = countSearchKey(array,num,key);

     printf("Search Key appears = %d times" ,count);
	 
    return 0;
}

int countSearchKey( int array[],int num,int key)
{
    int i ,count=0;

    for(i=0 ; i<num ; i++)
        {
            if(array[i]==key)
                count++;
        }

        return count;
}
