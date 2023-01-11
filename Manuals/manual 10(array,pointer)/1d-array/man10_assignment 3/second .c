#include <stdio.h>
#include <stdlib.h>

void ascend_array( int);
void display(int);
int array[1000];


int main()
{
    int i , num ,j , temp;
    printf("Enter number of elements : ");
     scanf("%d" , & num);


     printf("Enter its elements ");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }

         ascend_array(num);

       return 0;
}


void ascend_array(int num)
{
  int i,j,temp;

   for(i=0;i<num-1;i++)
   {

       for( j=0; j<num-1-i;j++)
       {
           if(array[j]>array[j+1])
           {
               temp = array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
   }
 printf("\nSorted list in ascending order:\n");
   display(num);

}





void display(int num)
{
     for (int i = 0; i < num; i++)
        {
           printf("%d ", array[i]);
        }


           printf(" \n2nd largest element : %d \n", array[num-2]);
           printf(" 2nd smallest element : %d ", array[1]);
}
