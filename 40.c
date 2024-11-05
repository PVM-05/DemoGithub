#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    while((a<-100 || a> 100) || (b<-100 || b>100))
    {
        scanf("%f%f",&a,&b);
    }
printf("%.2f",a*a+a*b+b*b);
return 0;
}