#include <stdio.h>

int main()
{
    FILE *fp;
    int i;
    char str[20];
char ch;

    fp = fopen("test.txt","w");

    if(fp ==NULL)
    {
         printf("\nFile doesnot exist");
         exit(1);
    }
          printf("\nEnter your name : ");
         scanf("%s",str);
          for(i=0;str[i]!='\0';i++)
          {
              fputc(str[i],fp);
          }

          printf("\nFile is written\n");

      fclose(fp);
     // getchar();





///getc not working
 fp = fopen("test.txt","r");

    if (fp == NULL)
	{
		printf("File failed to open\n");
	}

    else
	{
	    printf("File content is : ");

		for(i=0; i<30;i++)
       		     {
	               ch = fgetc(fp);          /* read a character from the file */
		      printf("%c",ch);                /* print the value of ch on monitor*/
                    }
		fclose(fp);
	}
      return 0;

}


