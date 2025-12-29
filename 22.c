#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Provide the three numbers\n");
    printf("The First number : ");
    scanf("%d",&a);
    printf("The Second number : ");
    scanf("%d",&b);
    printf("The Third number : ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("The First number is the largest");
    }
    if(b>a && b>c)
    {
        printf("The Second number is the largest");
    }
    else 
    {
        printf("The Third number is the largest");
    }
    return 0;
}