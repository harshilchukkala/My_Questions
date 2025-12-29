#include <stdio.h>
int Factorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(void)
{
    int n,r;
    printf("Provide n : ");
    scanf("%d",&n);
    printf("Provide r : ");
    scanf("%d",&r);

    printf("The nCr of %d and %d is %d",n,r,Factorial(n)/(Factorial(n-r)*Factorial(r)));
    return 0;
}