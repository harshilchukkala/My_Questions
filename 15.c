#include <stdio.h>

int main(void)
{
    printf("To see if the number is positive then print 1 or print 0\n");
    int x,n;
    printf("Provide the number : ");
    scanf("%d",&n);

    x = (n>0)?1:0;
    printf("%d\n",x);
}