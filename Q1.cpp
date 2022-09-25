#include<stdio.h>       //Sum of n natural numbers
int sum(int n)
{
    if(n==1)
    return 1;
    return n+sum(n-1);
}
int main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=sum(n);
    printf("The sum of natural numbers are : %d",k);
    return 0;

}
