#include<stdio.h>
int main()
{
    int n,k,q,r;
    scanf("%d%d",&n,&k);
    q=n/k;
    r=q%k;
    printf("%d\n",q*r);
    return 0;
}