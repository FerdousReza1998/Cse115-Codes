#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j ,m=4,n=4;

    for(i=0;i<m;i++)
    {
       for(j=1;j<=n;j++)
       {
           printf("(%d %d) ",j+i,j+i+1);
       }
       printf("\n");
    }
}
