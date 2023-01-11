#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rno;
    char name[10];
};

int main()
{
    FILE *fp;
    struct student s;

    fp = fopen("student.txt","wb");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(1);

    }
    printf("\nEnter roll number = ");
    scanf("%d" ,&s.rno);

    printf("\nEnter name = ");
    fflush(stdin);
    gets(s.name);

    fwrite(&s,sizeof(struct student),1,fp );///write structure in file
     printf("\nData is stored \n");

    fclose(fp);

    getchar();

   fp = fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(1);

    }
   fread(&s,sizeof(struct student),1,fp);/// read structure from file

    printf("\nRoll no  = %d",s.rno);
  printf("\n Name =  %s",s.name);
  fclose(fp);
    getchar();
}
