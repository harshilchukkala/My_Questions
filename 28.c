#include <stdio.h>

int main(void)
{
    int n,new=0;
    printf("Provide The Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        new=new+1;
    }
    printf("The No of digits is %d",new);
    return 0;
}