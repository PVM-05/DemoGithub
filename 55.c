#include<stdio.h>
int main()
{
    int n,a,b;
    int count=0;
    scanf("%d",&n);
    for(a=0;a<=n/2;a++)
    {
        for(b=0;b<=n-a;b++)
        {
            if(a+b==n)
            {
                printf("(%d,%d);",a,b);
                count++;
            }
        }
    }
    //printf("%d",count);
    return 0;
}