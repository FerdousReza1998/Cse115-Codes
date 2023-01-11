///Write a C program using function that reads a floating point number n and an integer d and then
///prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68


#include <stdio.h>
#include <stdlib.h>

double round(double,int);                                    /// int x = 4 \\ float y = 2.87
                                                             ///  int k = y
int main()                                                   ///   => k = 2
                                                             ///  float m = x
                                                             ///  => m = 4.00
{
    double n;
    int d;

    printf("Enter a number : ");
    scanf("%lf" , &n);
     printf("Enter decimal space  : ");
    scanf("%d" , &d);

    double ans = round(n,d);

     printf("%.15lf" , ans);

    return 0;
}

double round(double n,int d)
 {
   double n_float = n;                                        /// n is float

   for(int i=1 ; i <=d ; i++)
   {
       n_float = n_float*10;
   }



    int n_int = n_float;

     if(n_float-n_int>=0.5)
     {
        /// printf("%d" , (n3+1));

         n_int = n_int +1;
     }

     /*
     else
     {

         n3 =n3;
     }
*/

     n_float=n_int;                                                  ///answer needed in float



   for(int i=1 ; i <=d ; i++)
   {
       n_float= n_float/10;
   }



   return n_float;


 }
