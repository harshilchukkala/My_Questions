#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,x,b=0;
    printf("Provide The Number : ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("The Number is Not Prime");
        return 0;
    }
    x=sqrt(n);
    for(int i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
        printf("The Number is Not Prime");
    }
    else
    {
        printf("The Number is Prime");
    }
    return 0;
}