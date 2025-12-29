#include <stdio.h>

int main(void)
{
    int n,q;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int copy[n-1];

    printf("The position to Delete : ");
    scanf("%d",&q);
    for(int i=0;i<q-1;i++)
    {
        copy[i]=arr[i];
    }
    for(int i=q;i<n;i++)
    {
        copy[i-1]=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",copy[i]);
    }
    return 0;
}