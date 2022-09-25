#include<stdio.h>               //sum of digits of a number using recursion
int rem,sum=0;
int SumDigit(int a)
{
    if(a!=0)
    {
      rem=a%10;
      sum=sum+rem;
      SumDigit(a/10);
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
    k=SumDigit(a);
    printf("Sum of the digits of the entered number is : %d",k);
    return 0;
}
