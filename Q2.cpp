#include<stdio.h>           //sum of n natural odd numbers
int sumodd(int a)
{
    int s;
    if(a<0)
    return 1;
    s=(2*a-1);
    return s+sumodd(a-1);
}
int main()
{
    int a,k;
    printf("Enter the term upto which sum of odd number is required : ");
    scanf("%d",&a);
    k=sumodd(a);
    printf("Sum is : %d",k);
    return 0;
}
