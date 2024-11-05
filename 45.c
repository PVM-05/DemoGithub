#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int kq1=1;
    int kq2=1;
    for(int i=0;i<b;i++)
    {
        kq1=kq1*a;
    }
    for(int j=0;j<d;j++)
    {
        kq2=kq2*c;
    }
    printf("%d",kq1+kq2);
    return 0;
}