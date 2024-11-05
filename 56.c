#include<stdio.h>
int main ()
{
    int a,b,c,N;
    int kiemtra=0;
    scanf("%d",&N);
    for(a=1;a<N/3;a++)
    {
        b=a+1;
        c=a+2;
        if(a+b+c==N)
        {
            kiemtra=1;
        }
    }
    if(kiemtra)
    {
        printf("%d %d %d",a,b,c);
    }
    else
    {
        printf("NO");
    }
}
