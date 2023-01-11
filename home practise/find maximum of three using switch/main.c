#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ,y ,z;
   printf(" input three number : ");
   scanf("%d %d %d" , &x ,&y,&z);



   switch((x>y)&&(x>z))
   {
   case 1 :
       {
        printf(" \n%d is maximum " ,x);
        break;
       }
    case 0 :
       {

        switch(y>z)
          {
          case 1 :
            {
                printf(" \n%d is maximum " ,y);
                 break;
            }
          case 0 :
            {
                 printf(" \n%d is maximum " ,z);
                 break;
            }

          }

      }

   }



    return 0;
}
