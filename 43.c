#include <stdio.h>
int max(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    return max;
}
int main(void)
{
    int n;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Max number is %d",max(arr,n));
    return 0;
}