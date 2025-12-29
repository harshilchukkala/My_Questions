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
        new=new*10+x;
    }
    printf("The Reversed number is %d",new);
    return 0;
}