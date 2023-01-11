///C Program to check whether the input is a character, digit or a special character.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;

    printf("Input to check :  ");
    scanf("%c" , &ch);
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ) )
    {
        printf("%c is a character" ,ch);
    }
      else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit" ,ch);
    }
    else
    {
        printf("%c is a special character " ,ch);
    }
    return 0;
}
