#include <stdio.h>
#include <math.h>

int power(int a,int b)
{
    int c=1;
    for(int i=1;i<=b;i++)
    {
        c=c*a;
    }
    return c;
}
int main(void)
{
    int n,m,o,no=0,x,sum=0;
    printf("Provide The Number : ");
    scanf("%d",&n);
    m=n;o=n;

    while(m!=0)
    {
        m=m/10;
        no=no+1;
    }
    while(o!=0)
    {
        x=o%10;
        sum=sum+(power(x,no));
        o=o/10;
    }
    if(sum==n)
    {
        printf("The number is an Armstrong Number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }
    return 0;
}