///C Program to read an array from user and an index and then delete the element in that index of array:

#include<stdio.h>
void main()
{
int num, i, position;

printf("\nEnter no of elements :");      /// ==  Enter size
scanf("%d", &num);

int arr[num];


printf("Enter %d numbers :", num);       ///== Enter its elements
for (i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

printf(" Index of element to delete \n");   ///index of element = position
scanf("%d" ,&position);

if(position>num)
  {
    printf("Deletion not possible\n");
  }
 else
 {
   for (i=position-1;i<num-1;i++)
     {
       arr[i] = arr[i+1];
     }

   printf("Array after deleting the element at index: %d\n", position);     /// deleting position

  for (i=0;i<num-1;i++)
     {
      printf("%d ", arr[i]);
     }


 }
  return 0;
}
