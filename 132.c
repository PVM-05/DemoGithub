#include<stdio.h>
#include<math.h>

int check1(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int check2(int a,int b)
{
    if(a==0||b==0)
    {
        return a+b;
    }
    if(a>b)
    {
        a=a-b;
    }
    if(a<b)
    {
        b=b-a;
    }
    return a;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int n=check2(a,b);
    int result=check1(n);
    if(result) printf("YES");
    else printf("NO");
    return 0;
}