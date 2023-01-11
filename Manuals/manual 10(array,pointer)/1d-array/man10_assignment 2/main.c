///Write a program that deletes all the elements in an array which match a search key.

#include <stdio.h>
#include <stdlib.h>

int searchValue(int );
void deleteValue(int );
void displayElements(int);

int num ,array[1000];

int main()
{
    int i ,count  , value ;

    printf("Enter number of elements in array : ");
    scanf("%d", &num);

    printf("Enter its element : ");

    for (i=0; i<num; i++)
        {
            scanf(" %d" , &array[i]);
        }

        displayElements(num);

       printf("\nEnter the value you want to delete : ");
       scanf("%d" ,&value);

       count = searchValue(value);

      displayElements(num - count);

    return 0;
}

 int searchValue( int value )
{
    int flag=0,position,count=0 ;

          for(int i=0; i<num; i++)
        {
            if (value==array[i])
            {
               /// printf(" %d " , i);
               flag=1;
                position=i+1;
                deleteValue(position);
                count++;
            }
        }
        if(flag==0)
        {
            printf("value not in the array. ");
            position=num+1;
        }

       return count;
}

void deleteValue( int position )
{
    if(position>num)
  {
    printf("Deletion not possible\n");
  }
 else
 {
   for ( int i=position-1;i<num-1;i++)
     {
       array[i] = array[i+1];
     }


  }
}

void displayElements(int range)
{
     printf(" Elements are : ");
    for (int i=0;i<range;i++)
     {
      printf("%d ", array[i]);
     }
}
