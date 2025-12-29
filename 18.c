#include <stdio.h>

int main(void)
{
    int n,x;
    printf("To show if a number is divisible by both 5 and 7\n");
    printf("Provide the number - ");
    scanf("%d",&n);
    x=n%35;
    if(x==0)
    {
        printf("The number is divisible by 5 and 7\n");
    }
    else 
    {
        printf("The number is not divisible by 5 and 7\n");
    }
    return 0;
}