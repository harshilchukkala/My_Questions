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
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    printf("The factorial number is %d",Factorial(n));
    return 0;
}