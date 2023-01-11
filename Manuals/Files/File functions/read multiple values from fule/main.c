#include<stdio.h>
#include<string.h>

void main()
{

FILE *fpointer;
char name[100];
int age;
float salary;

fpointer = fopen("input.txt", "r");

while(fscanf (fpointer, "%s%d%f", &name, &age, &salary)== 3)
  {


  if(name[strlen(name) - 1] == '\n')
  name[strlen(name) - 1] = '\0';
  printf("%s\n%d\n%f\n", name, age, salary);
  if(feof(fpointer) == 1) break;
  }

   fclose(fpointer);
}
