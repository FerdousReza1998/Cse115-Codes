///Write a C program to check whether an input alphabet is a vowel or a consonant using
///switch case (assume that the input is an English letter).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;
    printf(" Input an alphabet : ");
    scanf("%c" , &ch);

    switch(ch)
    {
    case ('a'):
    case ('e'):
    case ('i'):
    case ('o'):
    case ('u'):
    case ('A'):
    case ('E'):
    case ('I'):
    case ('O'):
    case ('U'):
        printf(" %c is a vowel." , ch);
        break;

    default :
        printf(" %c is a consonant." , ch);
    }


    return 0;
}
