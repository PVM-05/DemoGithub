#include<stdio.h>
int tong(int a[],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
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
    

}