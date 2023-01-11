#include <stdio.h>
#include <stdlib.h>


  void check();
  void oddeven();

  int x;

int main()
{

    printf("Select 1(oddeven) 2(check): ");
    scanf("%d" , &x);

    if(x ==1)
        {
            oddeven();
        }
    else if(x == 2)
        {
             check();
        }
    else
    {
         printf("Wrong input ");
    }
}

   void check()
{


    printf("Enter an integer : ");
    scanf("%d" , &x);

    if(x>0)
    {
          printf("positive");
    }
     else if(x<0)
    {
        printf("negative");
    }

    else
     {
        printf("Zero");
     }

}

void oddeven()
{


    printf("Enter an integer : ");
    scanf("%d" , &x);

    if(x%2 == 0)
    {
        printf("Even");
    }

    else
    {
        printf("Odd");
    }
}




