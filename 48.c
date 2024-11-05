#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    while(a==0)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
    }
    int result=(a%b)+(b%c)+(c%d)+(d%a);
    printf("%d",result);
    return 0;
}