#include <stdio.h>

int main(void)
{
    int n;char c;
    printf("Provide The Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        c='1';
        for(int j=1;j<=i;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}