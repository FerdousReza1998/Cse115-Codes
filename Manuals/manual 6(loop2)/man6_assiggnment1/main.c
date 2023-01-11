///Write a C program to enter any number from user and find the reverse of a given number using loop. Sample
///input/output (bold ones are user inputs):

#include <stdio.h>
int main()
{
  int n, r = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d\n", r);

  return 0;
}
