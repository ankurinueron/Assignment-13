#include<stdio.h>           //sum of square of N natural numbers
int sumSquare(int a)
{
    int s;
    if(a==1)
        return 1;
    s=a*a;
    return s+sumSquare(a-1);
}
int main()
{
    int a,k;
    printf("Enter any number upto which sum of square is required : ");
    scanf("%d",&a);
    k=sumSquare(a);
    printf("The sum is : %d",k);
    return 0;
}

