
#include<stdio.h>
int main()

{
  int i, n;

   printf("No. of elements: ");
   scanf("%d",&n);

   int a[n],b[n],temp[n];

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

    for (i=0; i<n; i++)
    {
       temp[i]=a[i];
       a[i]=b[i];
       b[i]=temp[i];
     //  printf("\n After swaping %d  %d",a[i],b[i]);
    }
    printf("\n After swaping 1st array: ");

     for (i=0; i<n; i++)
     {
         printf(" %d",a[i]);
     }


          printf("\n After swaping 2nd array: ");

     for (i=0; i<n; i++)
     {
         printf(" %d",b[i]);
     }
  return 0;
}
