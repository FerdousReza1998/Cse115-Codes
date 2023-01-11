/// read roll number and marks of 10 students
///and print roll number of those whose marks>=75 using array of structure in c programming


#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};


int main()
{
   struct student s[10];

   int i;

   printf("Enter information of students:\n");

   for(i=0;i<10;i++)
   {
    /// s[i].roll=i+1;

     printf("\nRoll number %d\n",i+1);

     printf("Enter name: ");
     scanf("%s",s[i].name);

     printf("Enter marks: ");
     scanf("%f",&s[i].marks);

   }

     printf("\nList of roll no whose marks>=75\n");

     for(i=0;i<10;i++)
     {
         if (s[i].marks>=75)
         {
             printf("\nRoll number =%d",s[i].roll);

             printf("\nName: ");

             puts(s[i].name);
         }
     }

    return 0;
}
