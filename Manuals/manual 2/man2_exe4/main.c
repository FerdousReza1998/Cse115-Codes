///C Program to convert a lowercase letter to uppercase:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower , higher ;


      /// convert from higher case to lower case letter

     printf(" Input a higher case letter : ");
      scanf("%c" ,&higher);


      ///higher = ' ';

       lower = higher + 32;
      ///lower = tolower(higher);


      printf(" The lower case is : %c \n\n",lower );


      /// convert from lower case to higher  letter

      printf(" Input a lower case letter : ");

      scanf(" %c", &lower);

      higher = lower - 32;
      ///higher = toupper(lower);


      printf(" The higher case is : %c \n" , higher);



    return 0;
}
