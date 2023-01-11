///Read a floating point number from user and check if it has any fractional part (e.g. 4.5,
///6.9,...) or not (e.g. 4, 5, ...). If it has a fractional part then print “Not an integer”,
///otherwise print “integer"


#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
float f  , ex ;
  printf(" enter number : ");
  scanf("%f" , &f);
    n = f;
    ex=f-n;
if(ex>0)
{
    printf("\n This is Not an integer.");
}
else
{
    printf("\n This is an integer.");
}
    return 0;
}



