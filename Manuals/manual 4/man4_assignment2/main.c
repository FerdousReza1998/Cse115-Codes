
///Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change, so Farhan must
///have all the notes required to pay the bill. Write a C program that reads the bill and the number of
///each type of note (500, 100, 50, 20, 10, 5, 2, and 1) then also output the number of each notes
///required to pay the bill.




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x ,num500 =0, num100=0 ,num50=0 ,num20=0 , num10 =0,num5=0 , num2=0 , num1=0 ,extra=0 ;
    printf("Enter amount : ");
    scanf("%d" , &x);

  extra = x;
    if (x>=500)
    {
        num500 =x / 500;

        extra = x - 500*num500;
    }
    if(extra>=100)
    {
        num100 = extra /100;
    //printf("\n100 : %d" , num100);
    extra = x -(500*num500)-(100*num100);
    }

    if(extra>=50)
    {
        num50 = extra /50;
    //printf("\n50 : %d" , num50);
    extra = x -(500*num500)-(100*num100)-(50*num50);
    }
    if(extra>=20)
    {
        num20 = extra /20;
   // printf("\n20 : %d" , num20);
    extra = x -(500*num500)-(100*num100)-(50*num50)-(20*num20);
    }
    if(extra>=10)
    {
        num10 = extra /10;
    //printf("\n10 : %d" , num10);
    extra = x -(500*num500)-(100*num100)-(50*num50)-(10*num10)-(20*num20);
    }
    if(extra>=5)
    {
        num5 = extra /5;
    //printf("\n5 : %d" , num5);
    extra = x -(500*num500)-(100*num100)-(50*num50)-(10*num10)-(20*num20)-(5*num5);
    }

        if(extra>=2)
    {
        num2 = extra /2;
    //printf("\n5 : %d" , num5);
    extra = x -(500*num500)-(100*num100)-(50*num50)-(10*num10)-(20*num20)-(5*num5)-(2*num2);
    }
    printf("\n500 : %d" , num500);
          printf("\n100 : %d" , num100);
                printf("\n50 : %d" , num50);
                      printf("\n20 : %d" , num20);
                            printf("\n10 : %d" , num10);
                                  printf("\n5: %d" , num5);
                                  printf("\n2 : %d" , num2);
    printf("\n1 : %d" , extra);



    return 0;
}
