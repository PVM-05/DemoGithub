#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100];
    scanf("%s", &a);
    int length=strlen(a);
    for(int i=length-1;i>=0;i--) // -1 vi co ki tu /n 
printf("%c",a[i]);
return 0;
}