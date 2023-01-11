#include <stdio.h>
int main(void)
{
	char ch = 'X';
	FILE *fp;

	fp = fopen("myFile.txt","w");

	if (fp == NULL)
	{
		printf("File failed to open\n");
	}

    else
	{
		fputc(ch, fp);/* write a character in the file */
		fclose(fp);
	}

	return 0;
}
