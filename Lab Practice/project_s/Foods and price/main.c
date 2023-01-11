#include <stdio.h>
#include <stdlib.h>

int main()
{
    char food;
    int qnty , sum ;
    printf( "enter a food item :");
    scanf("%c" , &food);
    printf( "enter the quantity :");
    scanf("%d" , &qnty);

      switch(food)
      {


       case 'B' :
       case 'b' :
        {

         sum= 200*qnty;
        printf("the price is %d " , sum);
        break;
        }
      case 'F' :
      case 'f' :
         {
             sum= 50*qnty;
        printf("the price is %d  " , sum);
        break;
         }

      case 'P' :
      case 'p' :
          {


        sum= 500*qnty;
        printf("the price is %d " , sum);
        break;
          }
      case 'S' :
      case 's' :
          {


        sum= 150*qnty;
        printf("the price is %d " , sum);
        break;
          }
      default :

       printf( "Item is not on the list");

      }

    return 0;
}
