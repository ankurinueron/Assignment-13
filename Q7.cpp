#include<stdio.h>           //HCF of any two numbers using recursion
int HCF(int a,int b)
{
    if(b==0)
        return a;
    HCF(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    HCF(a,b);
    printf("/nHCF of entered two numbers are : %d",HCF(a,b));
    }
    else
        {
        printf("Please enter greater number first");
    }

    return 0;
}
