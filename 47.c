#include <stdio.h>

int main(void)
{
    int n;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n],max;
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    printf("The Max number is %d",max);
    return 0;
}