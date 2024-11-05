#include<stdio.h>
int main()
{
    int zz;
    scanf("%d",&zz);
    int xx=zz/3600;
    int yy=zz%3600/60;
    zz=zz%3600%60;
    printf("%02d:%02d:%d",xx,yy,zz);
    return 0;
}