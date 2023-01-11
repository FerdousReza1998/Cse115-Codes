///Number of vowels, consonants, words, digits  space and other

#include <stdio.h>
#include <stdlib.h>

int main()
{
      char str[100];
    int i , vowel ,consonent ,digit ,word ,space ,other;

   printf("Enter a string: ");
    gets(str);

   i=vowel=consonent=digit=word=other=space=0;

 while(str[i]!='\0')

 {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
         {
           vowel++;
         }

        else if((str[i]>='a'&& str[i]<='z') ||(str[i]>='A'&& str[i]<='Z'))
         {
             consonent++;
         }

        else if(str[i]>='0' && str[i]<='9')
         {
             digit++;
         }

        else if (str[i]==' ')
         {
            space++;
         }

        else
         {
             other++;
         }

        i++;

 }

     printf("\nVowels = %d" , vowel);
     printf("\nConsonants = %d" , consonent);
     printf("\nDigits= %d" , digit);
     printf("\nSpaces = %d" , space);
     printf("\nWords = %d" , space+1);
     printf("\nOther = %d" , other);



    return 0;
}
