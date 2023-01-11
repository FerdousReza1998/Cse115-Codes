///Use switch case to make a simple calculator that can add, subtract, multiply or divide two input
///numbers. The operator (+ , - , * or /) should also be read from user.


#include <stdio.h>
#include <stdlib.h>

int main()
{
  float result , num_1 , num_2 ;
  char oper ;

  printf(" Enter two numbers : ");
  scanf("%f %f" , &num_1 ,&num_2);
  printf(" Enter operator : ");
  scanf(" %c" , &oper);

/*
  printf(" Enter: ");
  scanf("%f" , &num_1);
  scanf("%c" , &oper);
scanf("%f" , &num_2);

*/
  switch(oper)
  {
  case '+' :
      {
          result = num_1+num_2;
          printf("%f + %f = %f" , num_1 , num_2 , result);
          break;
      }
    case '-' :
      {
          result = num_1-num_2;
          printf("%f - %f = %f" , num_1 , num_2 , result);
          break;
      }
    case '*' :
      {
          result = num_1*num_2;
          printf("%f * %f = %f" , num_1 , num_2 , result);
          break;
      }
    case '/' :
      {
          result = num_1/num_2;
          printf("%f / %f = %f" , num_1 , num_2 , result);
          break;
      }
    default :
        printf(" wrong operator detected ");

  }




    return 0;
}
