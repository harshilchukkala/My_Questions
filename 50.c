#include <stdio.h>

int main(void)
{
    int n,m,found=0;
    printf("The size of the Array is ");
    scanf("%d",&n);

    int arr[n];
    printf("Provide The Array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Provide the Number to search : ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            printf("The Numer is Present in the array at the position %d\n",i+1);
            found++;
            return 0;
        }
    }
    if(found==0)
    {
    printf("The number is not present in the Array");
    }
    return 0;
}