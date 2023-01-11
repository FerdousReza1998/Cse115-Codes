


****factor******



int factor(int x)
{
    int i;

for(i=1 ; i <=x/2;i++)
{

    if(x%i==0)
   {
    printf("%d",i);
   }
}

}


****reverse*****



int reverse(int x)
{
    int r=0;

    while(x!=0)
    {
        r=r*10;
        r=r+x%10;
        x=x/10;
    }
  return r;

}



****sum of digits*****




int sum_digits(int x)
{
    int digit, temp , sum =0;

    temp=x;

    while(x>0)
    {
        digit=x%10;
        sum = sum + digit;
        x=x/10

    }

        return sum;
}



*****count_digits******



int count( int x)

{
    count=0;


    while(x>0)
    {
        count++;
        x/10;

    }
    return count;
}



*****last and first digit*****




void last_first_digit(int x)
{
   int  last , first;

   last =x%10;

   while(x!=0)
   {
       first = x;
       x=x/10;

   }
     printf(" first digit :  %d\n" ,first);
      printf(" last digit :  %d" ,last);
}



*****perfect*****




void  perfect(int num)

{
    int i, sum=0;

    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;

        }
    }
    if(sum==num)
    {
        printf(" It is a perfect number");
    }
    else
    {
       printf(" It is not a perfect number");
    }


}




*****palindrome******




 void palindrome(int x)

{
   int r =0 , temp;
   temp=x;

  while (x != 0)
  {
    r = r * 10;
    r = r + x%10;
    x = x/10;
  }

   if(r==temp)
    {
     printf(" %d is a palindrome", temp);
    }

     else
    {
        printf(" %d  is not a palindrome", temp);
    }

}




******prime number*****




void prime(int x)
{
    int i , isprime = 1;
    for(i=2;i=x/2;i++)
    {
       if(x%i==0)
        {
            isprime = 0;
            break;
        }
    }
     if(isprime == 0)
    {
      printf("\n %d is not a prime number", n);
    }
    else
    {
      printf("\n %d is a prime number", n);
    }
}




********nPr******


int npr(int n,int r)
{
   int  result = factorial(n)/(factorial(n-r));

    return result ;
}



*****factorial******



int factorial(int x)
{
    int fact = 1, i;

    for(i=1;i<=x;i++)
        fact *= i;
    return fact;
}


******nCr******



int nCr(int n,int r)
{
   int  result = factorial(n)/(factorial(r)*factorial(n-r));

    return result ;
}


******print in words *****     ///rightmost digit




void  print_words (int x)
{
     int i;
                                ///leftmost digit  first use reverse function
     while(x!=0)
    {

        switch(x%10)
        {

           case 0 :
           {
               printf(" Zero");
               break;
           }

           case 1 :
           {
               printf(" One");
               break;
           }

           case 2 :
           {
               printf(" Two");
               break;
           }

           case 3 :
           {
               printf(" Three");
               break;
           }

           case 4 :
           {
               printf(" Four");
               break;
           }

           case 5 :
           {
               printf(" Five");
               break;
           }

           case 6 :
           {
               printf(" Six");
               break;
           }

            case 7 :
           {
               printf(" Seven");
               break;
           }
           case 8 :
           {
               printf(" Eight");
               break;
           }
             case 9 :
           {
               printf(" Nine");
               break;
           }

       }
    }
}


*****binary to decimal*****




int bin_deci(int x)

{
    int sum=0, k=0, i;


     i = x;          ///for void

    while(x != 0)
    {


            if(x%10 == 1)
            {

               sum = sum + pow (2 , k);
            }


        x=x/10;

        k++;
    }
    return sum;
}




*****deci_bin*****




int deci_bin(int x)

{
    int sum=0,k=0,i;


     i = x;       ///for void

    while(x != 0)
    {


            if(x%2 == 1)
            {

               sum = sum + pow (10, k);
            }


       x=x/2;

        k++;
    }
    return sum;
}



******power****




int power(int b,int p)
{
    int i , sum =1;

    for (i=1 ;i<=p ; i++)
    {
        sum = sum *b;

    }
    return sum;
}




*******upper pyramid*****




void upper_pyramid(int n)

{
    int rows,column;

    for (rows = 1; rows <=n ; rows++)
   {
      for (column= 1; column <= n - rows; column++)
        {
           printf(" ");
        }

      for (column = 1; column <=2*rows-1; ++column)
         {
             printf("*");
         }

      printf("\n");
   }

}




******lower pyramid******




void lower_pyramid(int n)
{
    int rows,column;

    for (rows = n; rows >=1; rows--)
   {
      for (column= 1; column <= n - rows; column++)
        {
           printf(" ");
        }

      for (column = 1; column <=2*rows-1; ++column)
         {
             printf("*");
         }

      printf("\n");
   }

}




******ascending array********




void ascend_array(int num)
{
  int i,j,temp;

   for(i=0;i<num-1;i++)
   {

       for( j=0; j<num-1-i;j++)
       {
           if(array[j]>array[j+1])
           {
               temp = array[j];
               array[j]=array[j+1];
               array[j+1]=temp;

           }


       }

   }

*******maximum  value in  array*******

          max = arr[0] ;
          for(i=1; i<n; i++)
        {

          if(max < arr[i])
           {
             max=arr[i];
             max_id = i+1;
           }

        }

