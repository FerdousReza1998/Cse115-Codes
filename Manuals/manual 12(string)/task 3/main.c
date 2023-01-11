///Declare two strings A and B of size 100 and 50, respectively. Then take user input of both strings.
///Concatenate (join) B at the end of A using loop. Display the concatenated string.

#include <stdio.h>
#include <stdlib.h>

int main()
{
     char A[100],B[50];
    int i,j,len=0;

    printf("Enter 1st string : ");
    gets(A);
	
    printf("Enter 2nd string : ");
    gets(B);

    for(i=0;A[i]!='\0';i++)
    {
       len++;
    }
	
     for(i=len,j=0;B[j]!='\0';i++,j++)
     {
         A[i]=B[j];
     }

     A[i]='\0';

     printf("\n concatenated String = %s" , A);
	 
    return 0;
}
