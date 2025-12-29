#include <stdio.h>

int main(void)
{
    printf("Swaping of two numbers\n");
    int a,b,t;
    printf("Provide the First Number : ");
    scanf("%d",&a);
    printf("Provide the Second Number : ");
    scanf("%d",&b);

    t=a;a=b;b=t;

    printf("After the Swap\nFirst number %d Second number %d",a,b);
    return 0;
}