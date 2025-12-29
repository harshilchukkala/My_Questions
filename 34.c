#include <stdio.h>

int main(void)
{
    int n,x,new=0;
    printf("Provide The Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        x=n%10;
        n=n/10;
        new=new+x;
    }
    printf("The Sum of digits is %d",new);
    return 0;
}