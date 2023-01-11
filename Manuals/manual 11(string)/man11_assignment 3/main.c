///Write a function that searches for a character in a string. The function should print true if found,
///otherwise print false.
///Search whether a character is present in string or not


#include <stdio.h>
#include <stdlib.h>

void search(char str[], char n);

int main()
{
    char str[100],n;


    printf("Enter string : ");
    gets(str);

    printf("Search key : ");
   scanf("%c" ,&n);

   search(str, n);

    return 0;
}

void search(char str[], char n)
{
    int i , flag=0;

    for(i=0;str[i]!='\0';i++)
   {
       if (str[i]==n)
       {
           flag=1;
           break;
       }
   }

   if(flag==1)
   {
       printf("Found");
   }
   else
   {
        printf(" Not Found");
   }
}
