#include<stdio.h>
#include<math.h>
#include<string.h>

void fibo(int n)
{
    printf("0 1 ");
    long long fn2=1,fn1=0;
    for(int i=3;i<n;i++)
    {
        long long fn=fn1+fn2;
        printf("%lld ",fn);
        fn2=fn1;
        fn1=fn;
    }
}

void fibo2(int n)
{
    long long fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%lld ",fibo[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    fibo2(n);
}