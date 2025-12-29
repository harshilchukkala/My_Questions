#include <stdio.h>

int main(void)
{
    int n;
    printf("The size of the First Array is ");
    scanf("%d",&n);
    int arr1[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("The size of the Second Array is ");
    scanf("%d",&m);
    int arr2[m];
    printf("Provide The Array : \n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merge[m+n];
    for(int i=0;i<n;i++)
    {
        merge[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        merge[i+n]=arr2[i];
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;
}