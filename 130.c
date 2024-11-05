#include<stdio.h>

int main()
{
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    float thuong=(float)a/b;
    if(c=='+')
    {
        printf("%d\n",a+b);
    }
    else if(c=='-')
    {
        printf("%d\n",a-b);
    }
    else if(c=='*')
    {
        printf("%d\n",a*b);
    }
    else if(c=='/') printf("%.2f\n",thuong);
}