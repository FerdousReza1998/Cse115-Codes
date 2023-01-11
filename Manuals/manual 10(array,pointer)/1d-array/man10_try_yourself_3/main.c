///Write a program reads two arrays from user and then output their product.

#include<stdio.h>
int main()

{
  int i, n;

   printf("No. of elements: ");
   scanf("%d",&n);

   int a[n],b[n],c[n];

   printf("Enter 1st array:");

   for (i=0; i<n; i++)

      {
       scanf("%d",&a[i]);
      }

   printf("Enter 2nd array:");

   for (i=0; i<n; i++)
      {
       scanf("%d",&b[i]);
      }

   for(i=0; i<n; i++)
      {
       c[i]=a[i]*b[i];

       printf("\n %d * %d = %d",a[i],b[i],c[i]);
      }

    return 0 ;
}
