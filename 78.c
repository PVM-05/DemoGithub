#include<stdio.h>
int tong(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int kiemtra(int a[],int n)
{
    int count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%tong(a[i])==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=kiemtra(a,n);
    printf("%d",count);
    return 0;
}