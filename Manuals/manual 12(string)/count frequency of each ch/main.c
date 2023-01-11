///Count frequency of each character in a string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int freqency[128];
    char string [100];

    printf("Enter a string : ");
    gets(string);

    for( int i=0;i<128;i++)
        freqency[i]=0;

    for( int i=0;string[i]!='\0';i++)
          {
               char c =string[i];
             freqency[(int)c]++;
          }

    for( int i=0;i<128;i++)
        {
            if(freqency[i]!=0)
                printf("\n%c=%d",(char)i,freqency[i]);

        }

    return 0;
}
