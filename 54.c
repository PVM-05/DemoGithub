#include<stdio.h>
#include<math.h>
int nt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    
    }
    if(n!=1)
    {
        printf("%d",n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    nt(n);
return 0;
}