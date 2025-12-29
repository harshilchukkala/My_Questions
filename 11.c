#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("All the operations\n");
    int a,b;
    printf("Provide the First Number : ");
    scanf("%d",&a);
    printf("Provide the Second Number : ");
    scanf("%d",&b);

    if (b==0) printf("Addition : %d\nSubtraction : %d\nProduct : %d\nQuotient : Does not Exist\nPower : %d\n",a+b,a-b,a*b,(int)pow(a,b));
    else printf("Addition : %d\nSubtraction : %d\nProduct : %d\nQuotient : %f\nPower : %d\n",a+b,a-b,a*b,(float)a/b,(int)pow(a,b));
    return 0;
}