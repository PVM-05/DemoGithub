#include<stdio.h>
int main()
{
    int a,b,n;
    int max_tich=0;
    int max_a,max_b;
    scanf("%d",&n);
    for(a=1;a<=n/2;a++)
    {
        b=n-a;
        int tich=a*b;
        if(tich>max_tich)
        {
            max_tich=tich;
            max_a=a;
            max_b=b;
        }
    }
    printf("%d %d",max_a,max_b);
    return 0;
}
