#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int tich=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tich=(tich*a[i])%10;
        if(tich<0)
        {
           tich=-tich;
        }
    }
    printf("%d",tich);
}