///Convert upper case into lower case and lower case into upper case in String in C language


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;
	
    printf("Enter a string: ");
    gets(str);
	
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]>=65 && str[i]<=90)
       {
           str[i]=str[i]+32;
       }

    else if(str[i]>=97 && str[i]<=122)
       {
           str[i]=str[i]-32;
       }
   }
   
   printf("\n Result = %s" ,str);
   
    return 0;
}
