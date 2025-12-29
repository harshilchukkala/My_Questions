#include <stdio.h>
int pallindrome(int a)
{
    int x,y,new=0;
    y=a;
    while(a!=0)
    {
        x=a%10;
        a=a/10;
        new=new*10+x;
    }
    if(new==y) x=0;
    else x=1;
    return x;
}
int main(void)
{
    int n,x;
    printf("Provide The Number : ");
    scanf("%ld",&n);
    x=pallindrome(n);
    if(x==0)    printf("The Number is a Pallindrome");
    else    printf("The Number is not a Pallindrome");

    return 0;
}