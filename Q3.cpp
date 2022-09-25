#include<stdio.h>           //sum of n natural even numbers
int sumeven(int a)
{
    int s;
    if(a<1)
    return 0;
    s=2*a;
    return s+sumeven(a-1);
}
int main()
{
    int a,k;
    printf("Enter the term upto which sum of even number is required : ");
    scanf("%d",&a);
    k=sumeven(a);
    printf("Sum is : %d",k);
    return 0;
}
