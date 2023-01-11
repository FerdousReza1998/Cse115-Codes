#include <stdio.h>
#include <stdlib.h>

int  num_descend(int start , int end);

int main()
{
     int start ,end;

    printf("Enter  starting number ");
    scanf("%d" , &start);
    printf("Enter  ending number ");
    scanf("%d" , &end);

     int result = num_descend(start,end);

   printf("%d" , result);

    return 0;
}


int num_descend(int start ,int end)
{
    if(end==start)
    {
        return start;
    }

         start = num_descend(start+1 ,end);
        printf("%d ",start);
        return start-1;

}
