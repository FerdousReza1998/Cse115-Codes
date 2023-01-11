///Create a struct called BirthCertificate (see below) and read the info of two persons using it. Then
///print the name of the person who is older than the other. Also print his/her parents’ names.

#include <stdio.h>
#include <stdlib.h>

struct BirthCertificate {
int day, month, year;
char name[100], fatherName[100], motherName[100];
};

struct BirthCertificate per1 ,per2 ;


int main()
{


    int p1day,p2day;

     printf("  Enter information \n\n ");

     printf("First Person : \n");
     printf("Enter day : ");
     scanf("%d" ,&per1.day);
     printf(" Enter month : ");
     scanf("%d" ,&per1.month);
     printf("Enter year : ");
     scanf("%d" ,&per1.year);
     printf("Enter name : ");
     scanf("%s" ,&per1.name);
     printf("Enter fathers name : ");
     scanf("%s" ,&per1.fatherName);
     printf("Enter mothers name : ");
     scanf("%s" ,&per1.motherName);

     printf("Second Person : \n");

     printf("Enter day : ");
     scanf("%d" ,&per2.day);
     printf(" Enter month : ");
     scanf("%d" ,&per2.month);
     printf("Enter year : ");
     scanf("%d" ,&per2.year);
     printf("Enter name : ");
     scanf("%s" ,&per2.name);
     printf("Enter fathers name: ");
     scanf("%s" ,&per2.fatherName);
     printf("Enter mothers name : ");
     scanf("%s" ,&per2.motherName);


     if(per1.year < per2.year)
     {
           printf("older persons name %s \n" , per1.name);
           printf("older persons father name %s \n" , per1.fatherName);
           printf("older persons mother name %s " , per1.motherName);
     }

     else if(per1.year > per2.year)
     {
           printf("older persons name %s \n" , per2.name);
           printf("older persons father name %s \n" , per2.fatherName);
           printf("older persons mother name %s " , per2.motherName);
     }

     else

     {
         if(per1.month < per2.month)
         {
              printf("older persons name %s \n" , per1.name);
              printf("older persons father name %s \n" , per1.fatherName);
              printf("older persons mother name %s " , per1.motherName);
         }

         else  if(per1.month > per2.month)
         {
             printf("older persons name %s \n" , per2.name);
             printf("older persons father name %s \n" , per2.fatherName);
             printf("older persons mother name %s " , per2.motherName);
         }

       else

         {
           if(per1.day<per2.day)
           {
                printf("older persons name %s \n" , per1.name);
                printf("older persons father name %s \n" , per1.fatherName);
                printf("older persons mother name %s " , per1.motherName);
           }

           else if(per1.day>per2.day)

           {
               printf("older persons name %s \n" , per2.name);
               printf("older persons father name %s \n" , per2.fatherName);
               printf("older persons mother name %s " , per2.motherName);
           }

           else

           {
               printf("Both of the person are same age");
           }


          }


     }

    return 0;
}
