#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int do_dai_max=1;
    int do_dai_hien_tai=1;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            do_dai_hien_tai++;
        }
        else
        {
            if(do_dai_hien_tai>do_dai_max)
            {
                do_dai_max=do_dai_hien_tai;
            }
        do_dai_hien_tai=1;    
        }
    }
    if (do_dai_hien_tai>do_dai_max)
    {
        do_dai_max=do_dai_hien_tai;
    }
    printf("%d",do_dai_max);
    return 0;
}