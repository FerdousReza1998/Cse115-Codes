
///Write a C program to check if an input integer is a multiple of either 2 or 5 but not a
///multiple of both. E.g. of valid numbers are 4, 6, 8, 12, 14, 15, 16, 25, etc. E.g. of invalid
///numbers are 1, 3, 7, 9, 10, 20, etc.


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a ;

  printf(" input an integer number : ");
  scanf("%d" , &a);



if  ( ( a%2 == 0 )  && ( a%5 == 0 )  )

  {
      printf(" \nyour number is  not valid ");
  }

  else if( ( a%2 == 0 ) || ( a%5 == 0))



  {
    printf(" \nyour number is valid");
  }
    else
    {
    printf(" \nyour number is not valid");
  }

    return 0;
}
