#include <stdio.h>

int main (void)
{
    printf("Provide the Numbers for which sum is calculated\n");
    int a,b;
    printf("First number : ");
    scanf("%d",&a);
    printf("Second number : ");
    scanf("%d",&b);

    printf("Their sum is : %d",a+b);
    return 0;
}