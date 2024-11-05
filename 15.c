#include<stdio.h>
#include<string.h>
void dao(char xau[], char rev_xau[])
{
    int i,j;
    int length=strlen(xau); 
    for(i=0,j=length-1;i<length;i++,j--)
    {
        rev_xau[i]=xau[j];
    }
   rev_xau[i] = '\0';
}    
int main()
{
    char xau[100];
    char rev_xau[100];
    fgets(xau,100,stdin);
    dao(xau,rev_xau);
    printf("%s%s",xau,rev_xau);
}