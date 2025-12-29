#include <stdio.h>
int Fib(int a)
{
    if(a==0) return 0;
    if(a==1) return 1;
    return Fib(a-1)+Fib(a-2);
}
int main(void)
{
    int n,j;
    printf("Provide The Number : ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("Fibonacci for negative numbers does not exist");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",Fib(i));
    }
    return 0;
}