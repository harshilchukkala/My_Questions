#include <stdio.h>

int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    if(n%2==1)
    {
        printf("The Number is Odd");
    }
    else
    {
        printf("The Number is Even");
    }
    return 0;
}