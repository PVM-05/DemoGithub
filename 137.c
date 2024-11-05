#include<stdio.h>

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}    