#include<stdio.h>
int main ()
{
    int n;
    int str[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++) //bubble sort!!!
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}