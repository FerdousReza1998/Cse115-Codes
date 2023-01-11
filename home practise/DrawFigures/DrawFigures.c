#include<stdio.h>

int triangle()
{
printf("       *    \n");
printf("      * *   \n");
printf("     *   *  \n");
printf("    ******* \n");

}

int rectangle()
{
printf("     ****** \n");
printf("     *    * \n");
printf("     *    * \n");
printf("     *    * \n");
printf("     ****** \n");

}

 int invertV( )
{
printf("       *    \n");
printf("      * *   \n");
printf("     *   *  \n");
printf("    *     * \n");

}

int circle()
{
printf("      **  \n");
printf("     *  * \n");
printf("     *  * \n");
printf("      **  \n");

}

void rocket()
{
    triangle();
    rectangle();
    invertV();
}

void male()
{
    circle();
    rectangle();
    invertV();
}

void female()
{
    circle();
    triangle();
    invertV();
}

int main()
{
    printf("\n---- Rocket ----- \n");
    rocket();


    printf("\n---- Male ----- \n");
    male();

    printf("\n---- Female ----- \n");
    female();

    printf("\n---- House ----- \n");
    triangle();
    rectangle();


}

