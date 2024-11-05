#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=a+b;
    int y=c+d;
    int kq=1;
    for(int i=0;i<y;i++)
    {
        kq=kq*x;
    }
    printf("%d",kq);
    return 0;
}