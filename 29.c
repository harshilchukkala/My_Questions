#include <stdio.h>

int main(void)
{
    int n,x1,x2,x3;
    printf("Provide The Number : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("0");
        return 0;
    }
    
    printf("0 1 ");
    x1=0;
    x2=1;
    for(int i=0;i<=n-3;i++)
    {
       x3=x1+x2;
       printf("%d ",x3);
       x1=x2;
       x2=x3; 
    }
    return 0;
}