#include <stdio.h>
#include <stdlib.h>

int  num_ascend(int start , int end);

int main()
{
     int start ,end;

    printf("Enter  starting number ");
    scanf("%d" , &start);
printf("Enter  ending number ");
    scanf("%d" , &end);

     int result = num_ascend(start,end);

   printf("%d" , result);

    return 0;
}


int num_ascend(int start ,int end)
{
    if(end==start)
    {
       // print("%d",end);
        return end;
    }

         end = num_ascend(start ,end-1);
        printf("%d ",end);
        return end+1;

}
