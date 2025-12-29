#include <stdio.h>

int main (void)
{
    printf("Calculate the Average\n");
    double a,b,c;
    printf("First Number : ");
    scanf("%lf",&a);
    printf("Second Number : ");
    scanf("%lf",&b);
    printf("Third Number : ");
    scanf("%lf",&c);

    printf("The Average is %lf",(a+b+c)/3);
    return 0;
}