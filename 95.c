#include<stdio.h>
void tach(int n)
{
    int a=1;
    while(n>0)
    {
        if(n-a<=a)
        {
            printf("%d ",n);
            break;
        }
        printf("%d ",a);
        n=n-a;
        a++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    tach(n);
    return 0;
}