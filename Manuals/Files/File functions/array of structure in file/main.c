///reading and writing array of structure in file

#include <stdio.h>
#include <stdlib.h>
struct book
{
    int bno;
    char name[10];
};

int main()
{
    FILE *fp;
    struct book b[5];

    int i;

    fp = fopen("book.txt","wb");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(1);

    }
    printf("\nEnter 5 book details");
    for(i=0;i<5;i++)
    {
        printf("\nenter %d book no = ",i+1);
        fflush(stdin);
        scanf("%d",&b[i].bno);
        printf("\nenter %d book name =" , i+1);
        fflush(stdin);
        gets(b[i].name);

    }


    fwrite(&b,sizeof(struct book),5,fp );///write structure in file///fprintf(fp," %d %s",b[i].bno,b[i].name );
     printf("\nData is stored \n");

    fclose(fp);

    getchar();

  fp = fopen("book.txt","rb");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(1);

    }
   fread(&b,sizeof(struct book),5,fp);/// read structure from file///fscanf(fp," %d %s",&b[i].bno,&b[i].name );

    printf("\nBook details");

    for(i=0;i<5;i++)
    {
        printf("\n book no = %d",b[i].bno);


        printf("\n book name = %s" , b[i].name);



    }


  fclose(fp);
    getchar();
}

