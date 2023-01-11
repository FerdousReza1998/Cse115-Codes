

/*
Write a C program to accept records of the different states using array of structures.
The structure should contain char state, population, literacy rate, and income.
Display the state whose literacy rate is highest and whose income is highest.
*/
#include<stdio.h>
//#define M 50

struct state
 {
   char name[50];
   long int population;
   float literacyRate;
   float income;
} ;          /* array of structure */

int main()
{
   int i, n, ml, mi, maximumLiteracyRate, maximumIncome;

   ml = mi = -1;
   maximumLiteracyRate = maximumIncome = 0;

   printf("Enter how many states:");
   scanf("%d", &n);

   struct state st[n];

   for (i = 0; i < n; i++)
        {
      printf("\nEnter state %d details :", i);
      printf("\nState name : ");
      scanf("%s", &st[i].name);
      printf("\tPopulation : ");
      scanf("%ld", &st[i].population);
      printf("\tLiterary rate : ");
      scanf("%f", &st[i].literacyRate); ;
      printf("\tPC Income : ");
 scanf("%f", &st[i].income);
   }

   for (i = 0; i < n; i++)
    {
      if (st[i].literacyRate > maximumLiteracyRate)
        {
      maximumLiteracyRate = st[i].literacyRate;
         ml = i;
      }

      if (st[i].income > maximumIncome)
        {
      maximumIncome = st[i].income;
         mi = i;
      }
   }

   printf("\nState with highest literary rate :%s",st[ml].name);
   printf("\nState with highest income :%s", st[mi].name);

   return 0;
}
