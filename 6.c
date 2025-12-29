#include <stdio.h>

int main (void)
{
    printf("Calculate the Percentage\n");
    double a,b,c,d,e,f,g,h,i,j;
    printf("Maximum Marks possible in First Subject : ");
    scanf("%lf",&j);
    printf("Marks obtained in First Subject : ");
    scanf("%lf",&a);
    printf("Maximum Marks possible in Second Subject : ");
    scanf("%lf",&i);
    printf("Marks obtained in Second Subject : ");
    scanf("%lf",&b);
    printf("Maximum Marks possible in Third Subject : ");
    scanf("%lf",&h);
    printf("Marks obtained in Third Subject : ");
    scanf("%lf",&c);
    printf("Maximum Marks possible in Fourth Subject : ");
    scanf("%lf",&g);
    printf("Marks obtained in Fourth Subject : ");
    scanf("%lf",&d);
    printf("Maximum Marks possible in Fifth Subject : ");
    scanf("%lf",&f);
    printf("Marks obtained in Fifth Subject : ");
    scanf("%lf",&e);

    printf("The Percentage is %lf",(a+b+c+d+e)/(f+g+h+i+j)*100);
    return 0;
}