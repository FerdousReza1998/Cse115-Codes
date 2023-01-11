///Write a program that prompts the user to
///insert an integer value, a decimal number and his name
///and print the inserted value as output

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float deci;
    char my_name[50];

    /// ex2();


    printf(" Enter an integer number: ");
    scanf("%d",&num);

    printf(" Enter a decimal number: ");
    scanf("%f",&deci);

    printf(" Enter your name: ");
    scanf("%s", &my_name);

    printf(" The integer number is %d.\n",num);
    printf("The decimal number is %f.\n", deci);
    printf("Your name is %s. ", my_name);



    return 0;
}
