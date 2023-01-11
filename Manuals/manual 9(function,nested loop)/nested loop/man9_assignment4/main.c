///Write a C program to print the first n palindrome numbers where n is an input.

#include <stdio.h>
int main()
{
  int n, m, r , temp ,i ,count =0;

  printf("Enter n : ");
  scanf("%d", &n);


for(i=1; ;i++)
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
       count++;
        }

        if(count==n)
        {

            /// for  nth palindromic => printf("%d ", i);
            break;
        }
    }

  return 0;
}
