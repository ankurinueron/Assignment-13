#include<stdio.h>       //fibonacci using recursion
int fib(int a)
{
    if(a==0 || a==1)
        return a;
    return fib(a-1)+fib(a-2);

}
int main()
{
    int i,a;
    printf("Enter the fibonacci value : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
        printf("%d ",fib(i));
    return 0;
}
