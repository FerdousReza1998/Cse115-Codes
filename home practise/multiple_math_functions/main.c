#include <stdio.h>
#include <stdlib.h>

 float add_val();
 float sub_val();
 float mul_val();
 float div_val();

 float result;


int main()
{
    int x,y;
    float z;
    char ch;

    printf("Enter the operation mode :\n");
    printf("A = Addition , S = Subtraction , M = mutipication, D = Division \n");
    scanf("%c", &ch);
    printf("Enter the value1 and value2 : \n");
    scanf("%d %d" , &x , &y);

    if(ch =='A' || ch == 'a')
    {
        z = add_val(x,y);
        printf("The result is %.2f \n" , z);
    }


     else if(ch =='S' || ch == 's')
    {
        z = sub_val(x,y);
        printf("The result is %.2f \n" , z);
    }
     else if(ch =='m' || ch == 'M')
    {
        z = mul_val(x,y);
        printf("The result is %.2f \n" , z);
    }
    else  if (ch =='d' || ch == 'D')
    {
        z = div_val(x,y);
        printf("The result is %.2f \n" , z);
    }
/*
    else  if (ch =='o' || ch == 'O')
    {
       /// int A = add_val(x,y);
        ///int M = mul_val(x,y);
        z = add_val(x,y) * mul_val(x,y);
        printf("The result is %.2f \n" , z);
    }

*/
    else
    {
        printf("The opreation or variable is invalid \n");

    }

    return 0;
}

    float add_val(int p , int q)
    {
       result = p+q;
        return result;
    }

    float sub_val(int p , int q)
    {
        result = p-q;
        return result;
    }

    float mul_val(int p , int q)
    {
        result = p*q;
        return result;
    }

    float div_val(int p , int q)
    {
        result = (float) p/q;
        return result;
    }

