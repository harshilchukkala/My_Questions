#include <stdio.h>

int main(void)
{
    int n;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n],new[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        new[i]=arr[n-i-1];
    }
    return 0;
}