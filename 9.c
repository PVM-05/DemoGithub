#include<stdio.H>
int main ()
{
    char a;
    int n;
    scanf("%c%d",&a,&n);
    char c=a+n;
    if (c>'z')
    {
        c=c-26; // quay lai a
    }
    printf("%c",c);
    return 0;
}