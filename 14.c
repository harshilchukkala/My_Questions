#include <stdio.h>

int main(void)
{
    printf("Compute (x*x + y*y) / (x-y)\n");
    float x,y;
    printf("Provide the First Number : ");
    scanf("%f",&x);
    printf("Provide the Second Number : ");
    scanf("%f",&y);

    if (x==y) printf("The answer after the Operation (x*x + y*y) / (x-y) is Does not exist\n");
    else printf("The answer after the Operation (x*x + y*y) / (x-y) is %f\n",(x*x + y*y) / (x-y));
    return 0;
}