#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float P=(a+b)*2;
    float S=a*b;
    printf("%.2f %.2f",P,S);
    return 0;
}