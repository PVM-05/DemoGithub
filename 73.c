#include<stdio.h>
int tong(int n)
{
    int sum=0;
    while(n<0 || n>1000000000)
    {
        printf("Nhap lai:");
        scanf("%d",&n);
    }
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=tong(n);
    if(n%sum==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
