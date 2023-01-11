#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student
{
    int roll;
    char name[10];

};

 void display (struct student);

int main()
{
    struct student stu;

    printf("enter student name : ");
    scanf( "%s", &stu.name);
    fflush(stdin);
    printf("enter roll no : ");
    scanf( "%d", &stu.roll);

    display(stu);

    getch();

    return 0;
}
 void display (struct student stu)

 {
     printf("student name : %s" , stu.name );
     printf(" \nstudent roll no : %d" , stu.roll);
 }


