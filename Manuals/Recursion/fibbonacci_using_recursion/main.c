#include <stdio.h>
#include <conio.h>

int fib(int);

int main()
{
    int  num ,i;
    printf("Enter a limit : ");
    scanf("%d" ,&num);

   printf(" Fibonacci series : ");

  for(i=0;i<num;i++)
  {
    printf(" %d" ,fib(i));
  }
  getch();

    return 0;
}

int fib(int n )
{
    if(n==0||n==1)
        return n;

    else
          return (fib(n-1)+fib(n-2));

}
