#include<stdio.h>
int main ()
{
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=n+1;i<=n*n;i++)
    {
        count++;
    }
    printf("%d",count);
}