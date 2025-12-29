#include <stdio.h>

int main(void)
{
    printf("To decide if Number is Even or Odd\n");
    int n;
    printf("Provide the Number : ");
    scanf("%d",&n);

    if(n%2==0) printf("The number is Even\n");
    else printf("The number is Odd\n");
    return 0;
}