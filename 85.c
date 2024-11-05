#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp;
    int i=0;
    int sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        n=n/10;
        sum=sum+temp*pow(2,i);
        i++;
    }
    printf("%d",sum);
    return 0;
}