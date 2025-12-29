#include <stdio.h>
#include <math.h>

int main(void)
{
    double p,r,t,a,c;
    printf("Principal amount : ");
    scanf("%lf",&p);
    printf("Rate (per year) : ");
    scanf("%lf",&r);
    printf("Total Time in years : ");
    scanf("%lf",&t);

    a=p*pow((1+r/(100)),t);
    c=a-p;

    printf("The Compound Interest = %lf",c);
    return 0;
}