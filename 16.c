#include <stdio.h>

int main(void)
{
    int a,b,p=1;
    printf("To calculate the power of a number\n");
    printf("To provide the Base : ");
    scanf("%d",&a);
    printf("To provide the power : ");
    scanf("%d",&b);

    for(int i=0;i<b;i++)
    {
        p=p*a;
    }
    printf("The Value is %d\n",p);
    return 0;
}