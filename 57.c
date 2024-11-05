#include<stdio.h>
int main()
{
    int n,a,b;
    int count=0;
    scanf("%d",&n);
    for(a=1;a<=n/2;a++)
    {
        if(n%a==0)
        {
            b=n/a;
            if(a<b)
            {
                printf("(%d,%d)",a,b);
                count++;
            }
        }
    }
    //printf("%d",count);
    return 0;
}