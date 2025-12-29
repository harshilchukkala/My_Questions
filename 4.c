#include <stdio.h>

int main (void)
{
    printf("Celsius to Fahrenheit\n");
    double c;
    printf("Temperature in Celsius : ");
    scanf("%lf",&c);

    printf("The temperature in Fahrenheit is %lf",1.8*c+32);
    return 0;
}