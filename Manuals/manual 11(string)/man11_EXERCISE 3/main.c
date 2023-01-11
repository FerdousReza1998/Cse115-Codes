///Write a C program to print all unique letters in an input string


#include<stdio.h>
int main()

{
    int i,j,c=0,k,count=0;

    char ch[100];

    printf("Enter a string:");
    gets(ch);

    for(i=0;ch[i]!=NULL;i++)

      {
          c++;
        if(isupper(ch[i]))
        ch[i]=tolower(ch[i]);

      }

    printf("unique letter:  ");

    for(j=c-1;j>=0;j--)

    {
       for(k=j-1;k>=0;k--)
        {
           if(ch[j]==ch[k])
               count++;
        }

      if(count==0)
        {
         if(ch[j]>='a'&& ch[j]<='z')
             printf(" %c",ch[j]);
        }

      count=0;
    }

}
