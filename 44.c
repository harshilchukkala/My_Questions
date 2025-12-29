#include <stdio.h>
int Reverse(int n)
{
    int new=0,x;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        new=new*10+x;
    }
    return new;
}
int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    printf("The Reversed number is %d",Reverse(n));
    return 0;
}