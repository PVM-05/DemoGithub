#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a<=0 || b<=0 ||c<=0)
    {
        printf("Khong hop le\n");
        scanf("%d%d%d",&a,&b,&c);
    }
    int p=(a+b+c)/2;
    int s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%d",s);
    return 0;
}