
///Write a C program to compute and print the sum of first n perfect numbers.

#include<stdio.h>
int main()
{
  int n,i,sum,count=0,input ,compute =0;
printf("Enter N : ");
scanf("%d" , &input);

  printf("Perfect numbers are: ");

for(n=1; ;n++)
 {
   sum = 0;

           for(i = 1; i<n ; i++ )
                {
                  if(n%i==0)
                      {
                        sum=sum+i;
                      }
                }

            if(sum==n)
                {
                  printf("%d ",n);
                compute=compute+n;
                    count++;
                }

            if( input == count)
                break;

 }

   printf("\nSum of the Perfect numbers are: %d", compute);
  return 0;
}
