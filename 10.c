#include <stdio.h>

int main(void)
{
    printf("Calculate the simple intrest\n");
    float p,r,t;
    printf("Provide the Principal amount : ");
    scanf("%f",&p);
    printf("Provide the Time in Years : ");
    scanf("%f",&t);
    printf("Provide the Rate of Interest : ");
    scanf("%f",&r);

    printf("The Interest amount is %f",p*t*r*0.01);
    return 0;
}