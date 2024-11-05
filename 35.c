#include<stdio.h>
int main ()
{
    int a,b,c,d,mod;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&mod);
    while(a<-100 || a>100 || b<-100 || b>100 || c<-100 || c>100 || d<-100 || d>100 || mod<-100 || mod>100)
    {
        printf("Nhap lai\n");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&mod);
    }
    printf("%d",(a*b*c*d)%mod);
}
