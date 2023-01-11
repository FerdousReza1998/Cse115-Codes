///Write a C program that reads an integer and returns the reverse of that number using function.

#include <stdio.h>
#include <stdlib.h>

int reverse(int);

int main()
{
    int n  , s;

    printf("Enter number : ");
    scanf("%d" , &n);

     s= reverse(n);
     printf("  In reverse : %d" , s);

    return 0;
}

int reverse(int a)
{
  int r;


  while (a != 0)
  {
    r = r * 10;
    r = r + a%10;
    a = a/10;
  }

  return r;

}


