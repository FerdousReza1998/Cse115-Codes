///Write a C program to read a number from user and check whether given number is a palindrome or not. A number
///is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not.

#include <stdio.h>

int main()
{
  int n, r = 0 , temp;

  printf("Enter a number to  check  if its a a palindrome or not \n");
  scanf("%d", &n);

  temp=n;

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }


  ///printf("\n %d ", r);
  ///printf("\n %d \n", n);

     if(r==temp)
    {
     printf(" %d is a palindrome", temp);
    }

     else
    {
        printf(" %d  is not a palindrome", temp);
    }

  return 0;
}
