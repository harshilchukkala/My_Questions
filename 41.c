#include <stdio.h>
#include <math.h>
void Prime(int n)
{
    int b=0,x;
    if(n<=1)
    {
        printf("The Number is Not Prime");
        return;
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
    
}
int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    Prime(n);
    return 0;
}