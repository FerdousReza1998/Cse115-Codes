///passing array of structure in function

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[50];
    float salary;

};

void display( struct employee[]);


int main()
{
    struct employee e[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nEmployee %d information",i+1);
        fflush(stdin);
        printf("\nId : ");
        scanf("%d",&e[i].id);

        printf("Name : ");
        fflush(stdin);
        gets(e[i].name);

        printf("salary :");
        fflush(stdin);
        scanf("%f",&e[i].salary);
    }

   display(e);

    return 0;
}

void display(struct employee e[])


{
    int i ;

    for(i=0;i<3;i++)
    {
        if(e[i].salary>100)
        {
            printf("\n Id = %d",e[i].id);
            printf("\n Name = %s",e[i].name);
            printf("\n Salary = %f",e[i].salary);
        }
    }


}


