#include<stdio.h>
#include<string.h>
int main ()
{
    char z[100];
    scanf("%s",z);
    char a=z[4]-32;
    char b=z[8]-32;
    printf("%c %c\n",a,b);
    return 0;
}