#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    printf("To give the roots of a Quadratic equation\n");
    printf("Provide the coefficients : \n");
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);

    double x1,x2;
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("The solutions of the quadratic quations are %0.3lf and %0.3lf\n",x1,x2);
    return 0;
}