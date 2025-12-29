#include <stdio.h>

int main(void)
{
    int n,fact=1;
    printf("Provide The Number : ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("The Factorial of a Negitive number doesnt Exist");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial is %d",fact);
    return 0;
}