#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
bool nt(int n)
{
    int i;
    if(n<2)
    {
        return false;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int kiemtra(int a[],int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(nt(a[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    int count=kiemtra(a,n);
    printf("%d",count);
    return 0;
}