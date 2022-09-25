#include<stdio.h>               //number of digits of a number using recursion
int rem,sum=0;
int Digit(int a)
{
    if(a!=0)
    {
      rem=a%10;
      sum+=1;
      Digit(a/10);
    }
    else
        return sum;
    return sum;
}
int main()
{
    int a,k;
    printf("Enter any number : ");
    scanf("%d",&a);
    k=Digit(a);
    printf("Sum of the digits of the entered number is : %d",k);
    return 0;
}

