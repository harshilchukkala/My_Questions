#include <stdio.h>
void fib(int n)
{
    int x1,x2,x3;
    if(n==1)
    {
        printf("0");
        return;
    }
    
    printf("0 1 ");
    x1=0;
    x2=1;
    for(int i=0;i<=n-3;i++)
    {
       x3=x1+x2;
       printf("%d ",x3);
       x1=x2;
       x2=x3; 
    }
    return;
}
int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    fib(n);
    return 0;
}