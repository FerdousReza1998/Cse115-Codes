///Write a C program that deletes all duplicate letters from an input string.

#include <stdio.h>
int RemoveDuplicates(char pstr[])
{
    int count[256]={0};
    int current=0,next=0;
    char temp;

    while(pstr[current])
    {
        temp = pstr[current];

        if( count[temp] == 0)
        {
            count[temp]=1;
            pstr[next]=pstr[current];
            next++;
        }

        current++;

    }

    pstr[next]='\0';

    }

int main()
{
 char str[100];

 printf("Enter a string : \n");

 gets(str);

 RemoveDuplicates(str);
 printf("%s",str);

 return 0;
}
