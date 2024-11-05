#include<stdio.h>
int main()
{
    int x,y;
    int i;
    long long z=1;
    int kq=1;
    scanf("%d %d",&x,&y);
    for(int i=0;i<y;i++)
    {
        kq=kq*x;
    }
    printf("%lld",kq);
    return 0;
}