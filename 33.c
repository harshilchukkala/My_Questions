#include <stdio.h>

int main(void)
{
    int n,x,odd=0,even=0;
    printf("Provide The Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        x=n%10;
        n=n/10;
        if(x%2==1) odd++;
        else even++;
    }
    printf("Odd digits : %d\nEven digits : %d",odd,even);
    return 0;
}