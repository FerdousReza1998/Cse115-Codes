#include <stdio.h>
#include <stdlib.h>

int main()
{

   int  i ,j,num,count;

int array[100] , dup[100];

     printf("Enter size of array : ");
     scanf("%d" , & num);



     printf("Enter its elements : \n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
            dup[i]=-1;
        }


          for(i=0 ; i<num ; i++)
        {
            count=1;
            for(j=i+1;j<num;j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                    dup[j]=0;

                }
            }
            if(dup[i]!=0)
            {
                dup[i]=count;
            }
        }
            printf("\n Duplicate elements in the array  are : \n");
            for(i=0;i<num;i++)
            {
                if(dup[i]>1)
                    printf(" %d" ,array[i]);
            }




    return 0;
}
