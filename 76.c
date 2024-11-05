#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool kiemtra(int n)
{
    int i;
    int x=sqrt(n);
    if(x*x==n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(kiemtra(a[i])==true)
        {
            count++;
        }
    }
    printf("%d",count);
    
}