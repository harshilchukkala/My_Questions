#include <stdio.h>

int main(void)
{
    int n,count;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n],random[n];
    for(int i=0;i<n;i++)
    {
        random[i]=214748000;
    }
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==random[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            random[i]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(random[i]==arr[j])
            {
                count++;
            }
        }
        if(count!=0)
        {
            printf("The number %d appeared %d time/times\n",random[i],count);  
        }
    }
    return 0;
}