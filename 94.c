#include<stdio.h>
int pascal(int k,int n)
{
    if(k==0 || k==n)
    {
        return 1;
    }
    else
    {
        return pascal(k-1,n-1)+pascal(k,n-1);
    }
}
int main()
{
    int n;
    int i,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf("%d",pascal(k,i)); // i tuong duong voi vai tro cua n
        }
        printf("\n");
    }
    return 0;
}