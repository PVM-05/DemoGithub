#include<stdio.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        if(sum==n)
        {
            printf("YES\n");
            flag=1;
        }
    }
    if (flag!=1)
    {
        printf("NO");
    }
    return 0;
}