///Write a C program to check whether an input alphabet is a vowel or a consonant (assume
///that the input is an English letter).

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char  ch ;
 printf(" input an alphabet : ");

 scanf("%c" , &ch);

  if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O' )||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
  {
      printf(" %c is a vowel" ,ch);
  }
  else
    {
      printf(" %c is a consonant" ,ch);
  }
    return 0;
}
