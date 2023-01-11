///Write a C program to compute and print the sum of palindrome numbers between m and n


#include <stdio.h>
int main()
{
  int n, m, r , temp ,i ,sum=0;

  printf("Enter starting point : ");
  scanf("%d", &m);

  printf("Enter ending point : ");
  scanf("%d", &n);

  printf("Palindrome numbers are  : ");

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
         sum =sum +i;
        }

    }
   printf("\nSum of palindrome numbers from %d to %d is : %d " , m , n , sum);
  return 0;
}
