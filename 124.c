#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int mark;
        scanf("%d",&mark);
        if(mark>=9&&mark<=10) printf("A+");
        else if(mark<9&&mark>=8) printf("A");
        else if(mark<8&&mark>=7) printf("B");
        else if(mark<7&&mark>=6) printf("C");
        else if(mark<6&&mark>=5) printf("D");
        else if(mark<5&&mark>=0) printf("E");
        else printf("-1");
    }
    return 0;
}