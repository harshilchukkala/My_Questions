#include <stdio.h>

int main(void)
{
    int n;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}