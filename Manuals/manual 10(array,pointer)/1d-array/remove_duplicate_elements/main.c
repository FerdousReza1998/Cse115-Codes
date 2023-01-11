#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i ,j,k,num ;
    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }
        for(i=0 ; i<num ; i++)
            for(j=i+1;j<num;j++)
            if(array[i]==array[j])
        {
            for(k=j+1;k<num;k++)
                array[k-1]=array[k];
            j--;
            num--;
        }
        printf("after delete duplicate elements");
        for(i=0;i<num;i++)
            printf(" %d",array[i]);
        getchar();


    return 0;
}
