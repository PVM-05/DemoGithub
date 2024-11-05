#include<stdio.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i*i==n)
        {
            printf("YES");
            flag=1;
        }
    }
    if(flag!=1)
    {
        printf("NO");
    }
    return 0;
}