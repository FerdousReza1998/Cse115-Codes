#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[20];
    int age;


    file = fopen("test.txt","w");

  if(file==NULL)
  {
    printf("File does not exist");

  }
  else
  {
       printf("file is opened\n");

        printf("enter name :");
        gets(name);
        printf("enter age :");
        scanf("%d",&age);
        printf("file is written");
        fprintf(  file," name = %s,age = %d \n" ,name,age);
       fclose(file);
     fflush(stdin);
  }

   getchar();

file = fopen("test.txt","r");

  if(file==NULL)
  {
    printf("File does not exist");

  }
  else
  {


        fscanf(  file,"name = %s,age = %d" ,&name,&age);
        printf(" %s %d", name ,age);
       fclose(file);
     fflush(stdin);
  }

   getchar();
}
