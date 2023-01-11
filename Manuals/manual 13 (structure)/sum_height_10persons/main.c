///sum of heights of 10 persons using array of structure


#include <stdio.h>
#include <stdlib.h>

struct height
{
    int feet;
    float inch;
};

int main()

{
    struct height h[10];
    struct height sum;

    int i;

    sum.feet=sum.inch=0;


    for(i=0;i<10;i++)
    {
        printf("Enter person %d Height\n\n",i+1);
        printf("Enter feet: ");
        scanf("%d",&h[i].feet); 
        printf("Enter inch: ");
        scanf("%f",&h[i].inch);
    }

    for(i=0;i<10;i++)
    {
        sum.feet=sum.feet+h[i].feet;
        sum.inch=sum.inch+h[i].inch;
    }

    while(sum.inch>=12)
    {
        sum.feet++;
        sum.inch=sum.inch-12;
    }

     printf("\nFeet=%d" , sum.feet);
     printf("\nInch=%f" , sum.inch);

    return 0;
}
