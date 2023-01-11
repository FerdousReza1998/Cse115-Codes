/*

Create a struct called “Employee” with the following members:
   a) Name
   b) Date of Birth (D.O.B., in short)
   c) Starting Date
   d) Salary
 Create an array of 4 employee variables; then read user input to fill up this array. Then display the
 info of the employee who gets the highest salary.
 
*/


#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char name[100];
    char dateofbirth[100];
    char startingdate[100];
    float salary;

};

 struct Employee person[4];

int main()

{

    int i;

      printf("Enter information of employee \n");

    for(i=0 ;i<4;i++)
		
    {

        printf("Enter information for employee %d\n",i+1);
        printf("Name: ");
        gets(person[i].name);
       /// scanf("%s",&person[i].name );
         printf("D.O.B: ");
        gets(person[i].dateofbirth);
      ///  scanf("%s",&person[i].dateofbirth );
         printf("Starting date: ");
         gets(person[i].startingdate);
       /// scanf("%s",&person[i].startingdate );
         printf("Salary: ");
        scanf("%f",&person[i].salary );
        fflush(stdin);
    }

   float max = person[0].salary; //initially assume arr[0] is the max

    for(i=0; i<4; ++i)
		  
		{
           if(max < person[i].salary) //update max if arr[i] > current value of max
           max=person[i].salary;
        }


    for(i=0; i<4; ++i)
		
	{
		
    if(max ==person[i].salary)
		
      {
         printf("Info of employee with highest salary:\n");
         printf("Name: %s\n" ,person[i].name);
         printf("D.O.B: %s\n" ,person[i].dateofbirth);
         printf("Starting date: %s\n" ,person[i].startingdate);
         printf("Salary: %f\n" ,person[i].salary);

      }

    }

    return 0;
}
