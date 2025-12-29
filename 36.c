#include <stdio.h>
int square(int a)
{
    return a*a;
}
int main(void)
{
    int n;
    printf("Provide The Number : ");
    scanf("%d",&n);

    printf("The Squared number is %d",square(n));
    return 0;
}