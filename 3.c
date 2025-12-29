#include <stdio.h>

int main (void)
{
    printf("Area of a circle , if the radius is given\n");
    double r;
    printf("Radius : ");
    scanf("%lf",&r);

    printf("\nThe Area of the circle is %lf",3.14159256*r*r);
    return 0;
}