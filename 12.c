#include <stdio.h>

int main(void)
{
    printf("Compute (a+b)*(a-b)\n");
    float a,b;
    printf("Provide the First Number : ");
    scanf("%f",&a);
    printf("Provide the Second Number : ");
    scanf("%f",&b);

    printf("The Answer after the operation (a+b)*(a-b) is %f",(a+b)*(a-b));
    return 0;
}