#include<stdio.h>
int main ()
{
    int numbers,n,flag;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&numbers);
        if(numbers==19)
        {
            printf("19");
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {
        printf("IMPOSSBILE");
    }
    return 0;
}