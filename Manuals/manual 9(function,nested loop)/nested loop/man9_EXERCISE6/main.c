
///Write a C program to print the n-th perfect number where n is an input.

#include<stdio.h>
int main()
{
  int n,i,sum,count=0,input ;
printf("Enter N : ");
scanf("%d" , &input);

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
                    count++;
                }

            if( input == count)
                {
                   printf(" %d no perfect number is : %d",input,n);
                   break;
                }


 }

  return 0;
}
