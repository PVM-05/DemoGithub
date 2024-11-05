#include <stdio.h>
int main ()
{
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=(n-1)/2 +1 ;i<=n;i++)
    {
        count++;
    }
    printf("%d",count);
}