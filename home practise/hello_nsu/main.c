/*#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\t\"North South University\"\n\n");
   printf("Hello class of CSE115L!! Welcome to NSU.\n");
    return 0;
}

/// \n  \t  \" \'  \a
*/
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the X and Y coordinate: ");
    scanf("%f %f",&x,&y);


    switch(x>0)
    {
    case 1:
        {
            switch(y>0)
            {
            case 1:

                printf("1st coordinate");
                break;
            case 0:

                printf("4th coordinate");
                break;
            }
            break;
        }
        case 0 :
            {
                switch(y<0)
            {
            case 1:

                printf("3rd coordinate");
                break;
            case 0:

                printf("2nd coordinate");
                break;
            }
             break;
            }
            default:
               printf("Not in any coordinate");

    }




}
