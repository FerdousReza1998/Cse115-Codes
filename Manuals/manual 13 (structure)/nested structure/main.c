#include<stdio.h>


struct dob
{
   int day;
   int month;
    int year;

};

struct student
{
  char    name[30];
  int     id;
  struct dob  d1;

};

int main()

   {

    struct student s1;

    printf("\nStudent details \n");

    printf("Enter id :");
    scanf("%d",&s1.id);

    printf("Enter name :");
    fflush(stdin);
    gets(s1.name);

     printf(" Enter dob(day month year) :");

     scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year); /// printf(“Enter address: H, Rd, City”);scanf(“%d %s %s”,&emp.add.house,emp.add.street,emp.add.city);

    printf("\nId = %d ",s1.id);
    printf("\nname = %s ",s1.name);

    printf("\nDOB = %d %d %d ",s1.d1.day, s1.d1.month,s1.d1.year);


    return 0;
}
