#include <stdio.h>

int main(void)
{
    int n,m,q;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int copy[n];

    printf("Number to Insert : ");
    scanf("%d",&m);
    printf("The position to Insert : ");
    scanf("%d",&q);
    for(int i=0;i<q-1;i++)
    {
        copy[i]=arr[i];
    }
    copy[q-1]=m;
    for(int i=q-1;i<n;i++)
    {
        copy[i+1]=arr[i];
    }
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",copy[i]);
    }
    return 0;
}