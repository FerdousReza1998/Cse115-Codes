#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[20];

    file = fopen("text.txt","w");

    if(file ==NULL)
    {
          printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter name : ");
        gets(name);

        fputs(name,file);

         printf("File is  written");



    }

fclose(file);
  getchar();


    file = fopen("text.txt","r");

    if(file ==NULL)
    {
          printf("File does not exist");
    }
    else
    {

       while(!feof(file))
       {

        fgets(name,40,file);
        printf("\n%s\n",name);

       }



    }

fclose(file);

    getchar();
}
