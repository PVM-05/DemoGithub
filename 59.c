#include<stdio.h>
int main()
{
    int a,b,i,n;
    int max=0;
    int max_a,max_b;
    scanf("%d",&n);
    for(a=1;a<=n/2;a++)
    {
        if(n%a==0)
        {
            b=n/a;
            int tong=a+b;
            if(tong>max)
            {
                max=tong;
                max_a=a;
                max_b=b;
            }
        }
    }
    printf("%d %d",max_a,max_b);
    return 0;
}