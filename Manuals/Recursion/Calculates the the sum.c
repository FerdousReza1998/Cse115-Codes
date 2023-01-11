#include<stdio.h>

int sum(int n);

int main()
{
    int input,ans;
    scanf("%d", &input);
    ans = sum(input);
    printf("%d" ,ans);
}

int sum(int n)
{
   if(n>1)
   {
        n = n + sum(n-1);
        return n;
   }
   else
    return 1;

}
