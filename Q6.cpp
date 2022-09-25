#include<stdio.h>       //factorial of a given number using recursion
int fact(int a)
{
    if(a==1||a==0)
        return 1;
    return a*fact(a-1);
}
int main()
{
    int a,k;
    printf("enter the number : ");
    scanf("%d",&a);
    k=fact(a);
    printf("Factorial is : %d",k);
    return 0;


}
