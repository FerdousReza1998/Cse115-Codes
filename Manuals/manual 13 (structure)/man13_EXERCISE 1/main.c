///Create a struct called Student (see below) and read the records of two students using it. Then print
///the name and id of the student who has higher CGPA than the other

#include <stdio.h>
#include <stdlib.h>

struct Student
{
char name[50];
int id;
float CGPA;
};

 struct Student stu1,stu2;

int main()
{


      printf("Enter information of students:\n");
      printf("  first student:  \n");
      printf("Enter name: ");
      scanf("%s" , &stu1.name);
      printf("Enter id: ");
      scanf("%d" , &stu1.id);
      printf("Enter CGPA: ");
      scanf("%f" , &stu1.CGPA);

      printf("  Second student:  \n");
      printf("Enter name: ");
      scanf("%s" , &stu2.name);
      printf("Enter id: ");
      scanf("%d" , &stu2.id);
      printf("Enter CGPA: ");
      scanf("%f" , &stu2.CGPA);

      if(stu1.CGPA>stu2.CGPA)
      {
          printf("Name of the higher CGPA student is : %s\n" , stu1.name);
          printf("id of the higher CGPA student is : %d\n" , stu1.id);

      }
     else if(stu1.CGPA<stu2.CGPA)
      {
          printf("Name of the higher CGPA student is : %s\n" , stu2.name);
          printf("id of the higher CGPA student is : %d\n" , stu2.id);

      }
      else
      {
          printf(" Both students have same CGPA");
      }


    return 0;
}
