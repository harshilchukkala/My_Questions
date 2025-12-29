#include <stdio.h>

int main(void)
{
    int n,sum=0;
    printf("Provide The Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}