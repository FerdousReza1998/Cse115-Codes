#include<stdio.h>

int main()
{
   int i;
   char str[31];

  printf("Enter a string : ");
   gets(str);

   char *pstr;
   pstr = &str;

    i=0;

  while(  str[i] != '\0' )
  {
     if(i%2==0)
        printf("\nThe %dth element of z is: %c", i, *pstr);
        //prints i and the current target of pstr pointer

       i++;
      pstr++;// pz increments; hence points to the next neighbor address
   }

   return 0;

}
