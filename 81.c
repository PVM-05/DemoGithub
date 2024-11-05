#include<stdio.h>
int main()
{
    int a,b;
    int res1=0;
    int res2=0;
    int temp1,temp2;
    scanf("%d%d",&a,&b);
    while(a>0)
    {
        temp1=a%10;
        res1=res1*10+temp1;
        a=a/10;
    }
    while(b>0)
    {
        temp2=b%10;
        res2=res2*10+temp2;
        b=b/10;
    }
    printf("%d%d",res2,res1);
    return 0;
}