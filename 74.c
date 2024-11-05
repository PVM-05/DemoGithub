#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b=sqrt(n);
    printf("%d\n",b);
    for(int i=1;i*i<=n;i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}