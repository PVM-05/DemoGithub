#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    
    int kq=((a+b)*(a-b))/((a*b)*(a/b));
    printf("%d",kq);
    return 0;
}