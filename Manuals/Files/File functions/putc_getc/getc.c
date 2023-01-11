
#include <stdio.h>
int main(void)
{   int i;
    char ch;
    FILE *fp;

    fp = fopen("test.txt","r");

    if (fp == NULL)
	{
		printf("File failed to open\n");
	}

    else
	{
		for(i=0; i<30;i++)
       		     {
	               ch = fgetc(fp);          /* read a character from the file */
		      printf("%c",ch);                /* print the value of ch on monitor*/
                    }
		fclose(fp);
	}

	return 0;
}
