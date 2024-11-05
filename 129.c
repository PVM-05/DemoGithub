#include<stdio.h>
#include<math.h>

int check1(int n)
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

int check2(int n)
{
    int count;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(check1(n))
    {
        int cnt=check2(n);
        printf("GOOD\n");
        printf("%d",cnt);
    }
    else
    {
        printf("BAD");
    }
}    