
///Read a character from user and check if it is a valid hexadecimal digit or not. Hint: a char
///is a valid hexadecimal digit if it is one of these characters: ‘0’, ‘1’, ... , ‘9’, ‘a’, ’b’, ... , ’f’,
///‘A’,’B’, ... ,’F’


#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;

    printf("Input a character : ");
    scanf("%c", &ch);



   if((ch >= 'a' && ch <= 'f' ) || ( ch >= 'A' && ch <= 'F' )||( ch >= '0' && ch <= '9' ) )
    {
        printf("\n %c is a valid hexadecimal digit." ,  ch);
    }

    else
    {
        printf("\n %c is  not a valid hexadecimal digit.", ch);
    }

    return 0;
}
