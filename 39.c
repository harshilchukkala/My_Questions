#include <stdio.h>
int GCD(int a,int b)
{
    if(b>a)
    {
        int t;
        t=b;b=a;a=t;
    }
    while(a%b!=0)
    {
        int x;
        x=a%b;a=b;b=x;
    }
    return b;
}
int main(void)
{
    int a,b;
    printf("Provide The First Number : ");
    scanf("%d",&a);
    printf("Provide The Second Number : ");
    scanf("%d",&b);

    printf("The GCD of %d and %d is %d",a,b,GCD(a,b));
    return 0;
}