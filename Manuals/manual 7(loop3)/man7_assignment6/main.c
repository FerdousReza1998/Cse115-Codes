
///Write a C program that asks a shopper to enter amount (in kg) and total price of sugar he bought from
///different places. If the shopper mistakenly enters a negative number as amount/price, it prints an error
///message “Invalid input, enter a positive number” and prompts the shopper to give another input. When
///the shopper enters 0 as an amount then the program terminates and shows the shopper total amount,
///price and average price of sugar per kg. [Hint: Use continue statement within a loop]

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float kg , price , Tkg=0 , Tprice=0 , avg=0 ;


 while(1)
 {

  printf("Enter amount (in kg): ");
  scanf("%f", &kg);

      if(kg==0)
       {
          break;
       }

      if(kg<0)
      {
          printf("Invalid input, enter a positive number.\n");
          continue;
      }



  printf("Enter price: ");
  scanf("%f", &price);

     if( price==0)
     {
        break;
     }


     if(price<0)
     {
          printf("Invalid input, enter a positive number.\n");
          continue;
     }


     Tkg = Tkg + kg;
     Tprice = Tprice + price;
 }

  avg = Tprice/Tkg;

  printf("Total amount (in kg): %.0f, Total price: %.2f, Average price per kg: %.2f"  , Tkg , Tprice , avg);



    return 0;
}
