#include <stdio.h>
#include <math.h>
void Perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("The Number is Perfect");
    }
    else
    {
        printf("The Number is Not Perfect");
    }  
}
int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    Perfect(n);
    return 0;
}