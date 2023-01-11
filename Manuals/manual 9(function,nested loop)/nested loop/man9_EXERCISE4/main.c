
///Write a C program to print the first n perfect numbers where n is an input.

#include<stdio.h>
int main()
{
  int n,i,sum,count=0,input ;
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
                    count++;
                }

            if( input == count)
                break;

  }

  return 0;
}
