#include<stdio.h>
#include<math.h>



int nt (int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int prime[1000001];

void nt2()
{
    for(int i=0;i<1000000;i++)
    {
        prime[i]=1;
        prime[0]=0;
        prime[1]=0;
    }
    for(int i=2;i<sqrt(1000000);i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<1000000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}
int main()
{
    nt2();

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(prime[i])
        {
            printf("%d ",i);
        }
    }
}