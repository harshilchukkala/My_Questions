#include <stdio.h>

int main(void)
{
    printf("To give the No of years, weeks , and days for a given no of days\n");
    int n,a=0,b=0;
    printf("The no of days are : ");
    scanf("%d", &n);

    while(n>=365) {a++;n=n-365;}
    while(n>=7) {b++;n=n-7;}

    printf("Year : %d\nWeek : %d\n Days : %d\n",a,b,n);
    return 0;
}