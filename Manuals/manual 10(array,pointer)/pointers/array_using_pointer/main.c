#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,z[5]={50,40,30,20,10};
    int *pz,end_z;

    pz=&z;  ///pz pointer gets the address of z[0]

    end_z =pz+5;                     ///printing all elements of z by pointing to z through pz

    for(  ; pz < end_z ; pz++)        ///prints 1 and the current target of pz
    {
          printf("\n the next element of z is %d" ,*pz);///increments; hense points to the next neighbor address
    }



    return 0;
}
