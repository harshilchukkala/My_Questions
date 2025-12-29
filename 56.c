#include <stdio.h>
int Fact(int a)
{
    if(a<0)
    {
        return -1;
    }
    if(a==0 || a==1)
    {
        return 1;
    }
    return a*Fact(a-1);
}
int main(void)
{
    int n,j;
    printf("Provide The Number : ");
    scanf("%d",&n);

    j=Fact(n);
    if(j==-1)
    {
        printf("Factorial of A negitive numebr doesnt Exist");
    }
    else
    {
        printf("The Factorial number is %d",j);
    }
    return 0;
}