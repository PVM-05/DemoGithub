#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        sum=sum+(i+1)*a[i];
    }
    printf("%d",sum);
    return 0;
}