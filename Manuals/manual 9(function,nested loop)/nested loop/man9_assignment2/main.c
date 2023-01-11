///Write a C program to print all palindrome numbers between m and n (m, n are inputs). For e.g. 121 is a
///palindrome since the reverse of 121 = 121; but 152 is not a palindrome.

#include <stdio.h>
int main()
{
  int n, m, r , temp ,i;

  printf("Enter starting point : ");
  scanf("%d", &m);

  printf("Enter ending point : ");
  scanf("%d", &n);

for(i=m;i<=n;i++)
    {
      r = 0 ;
      temp=i;

      while (i != 0)
      {
        r = r * 10;
        r = r + i%10;
        i = i/10;
      }

        i = temp;

         if(r==temp)
        {
         printf("%d ", i);
        }

    }
  return 0;
}
