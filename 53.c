#include <stdio.h>

int main(void)
{
    int n,count;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    do{
        count=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int t;
                t=arr[i];arr[i]=arr[i+1];arr[i+1]=t;
                count++;
            }
        }
    }while(count!=0);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}