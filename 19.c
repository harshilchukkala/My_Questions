#include <stdio.h>

int main(void)
{
    double a;
    printf("To give the area and permimeter of the square for a given side\n");
    printf("Side = ");
    scanf("%lf",&a);
    
    printf("Area = %lf\n",a*a);
    printf("Perimeter = %lf\n",4*a);
    return 0;
}