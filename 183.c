#include<stdio.h>

int main()
{
    int a[5];
    int count;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        count=0;
        for(int j=0;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==4)
            {
                flag=1;
                break;
            }
    }
    if(flag)
    {
        printf("1");
    }
    return 0;
}