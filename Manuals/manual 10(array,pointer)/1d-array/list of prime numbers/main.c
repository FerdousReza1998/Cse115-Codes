#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j, f ,n, num ;

    printf("Enter size of array : ");
     scanf("%d" , & num);

     int array[num];

     printf("Enter its elements\n");

     for(i=0 ; i<num ; i++)
        {
            scanf("%d" , &array[i]);
        }

        for(i=0;i<num;i++)
        {
            n=array[i];
            f=0;

            for(j=2;j<n;j++)
            {
                if(n%j==0)
                 {
                      f=1;
                     break;
5
                 }
            }
            if(f==0)
                printf("\n %d is a prime" , n);


        }

    return 0;
}
