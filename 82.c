#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int i;
    int tich=1;
    for(i=a;i<=b;i++)
    {
        tich=tich*i;
    }
    printf("%d",tich%c);
    return 0;
}