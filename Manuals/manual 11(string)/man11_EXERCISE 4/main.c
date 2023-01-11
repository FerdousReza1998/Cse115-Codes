///Write a program that reads a string from user and then prints the number of times different letters
///appear in that string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count[26];
    printf("Enter a string: ");
    gets(str);
    for(i=0;i<26;i++){
        count[i]=0;
    }

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            count[str[i]-97]++;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            count[str[i]-65]++;
        }
    }

        for(i=0;i<26;i++)
            {
            if(count[i]!=0)
            printf("%c/%c: %d, ", i+97,i+65,count[i]);
            }
}
