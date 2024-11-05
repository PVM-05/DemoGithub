#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int count=0;
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
        count++;
    }
    float kq=(float)sum/count;
    printf("%.2f",kq);    
    return 0;
}