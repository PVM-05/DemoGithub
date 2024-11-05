#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    
    scanf("%d",&n);
    while(n<0 || n>10000000000)
    {
        scanf("%d",&n);
    }
    float kq=sqrt(n);
    printf("%.2f",kq);
    return 0;
}