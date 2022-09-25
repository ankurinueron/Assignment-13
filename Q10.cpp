#include<stdio.h>           //power function of any number
int pow(int n,int p)
{
    if(p!=0)
        return (n*pow(n,(p-1)));
    else
        return 1;
}
int main()
{
    int n,p,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the require power of the number (+ve) : ");
    scanf("%d",&p);
    k=pow(n,p);
    printf("The result is : %d",k);
    return 0;
}
