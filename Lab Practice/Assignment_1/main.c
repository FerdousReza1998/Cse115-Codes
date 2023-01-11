#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower , higher ;


      /// convert from higher case to lower case letter

      printf(" Input a higher case letter : ");
      scanf("%c" ,&higher);

      lower = higher + 32;

      printf(" The lower case  letter is : %c \n\n",lower );


      /// convert from lower case to higher  letter

      printf(" Input a lower case letter : ");
      scanf(" %c", &lower);

      higher = lower - 32;

      printf(" The higher case  letter is : %c \n" , higher);


    return 0;
}
