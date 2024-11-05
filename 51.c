#include<stdio.h>
int ucln(int a,int b)
{
    if(a<0)
    {
        a=a*(-1);
    }
    if(b<0)
    {
        b=b*(-1);
    }
    if(a==0||b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=ucln(a,b);
    int a1=a/c;
    int b2=b/c;
    printf("%d %d",a1,b2);
    return 0;
}