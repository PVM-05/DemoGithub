#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a<-1000 || a>1000 || b<-1000 || b>1000 || c<-1000 || c>1000)
    {
        scanf("%d%d%d",&a,&b,&c);
    }
    printf("%d",a*a*a-b*b+c);
    return 0;
}