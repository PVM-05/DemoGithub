#include<stdio.h>
int main ()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i*(i+k);
    }
    printf("%d\n",sum);
    return 0;
}