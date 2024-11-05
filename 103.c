#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float D=a*e-b*d;
    float Dx=c*e-b*f;
    float Dy=a*f-c*d;
    float x=Dx/D;
    float y=Dy/D;
    if(D==0)
    {
        printf("0");
    }
    else if(Dx==0 || Dy==0)
    {
        printf("inf");
    }
    else
    {
        printf("%.1f %.1f",x,y); 
    }
    return 0;
}