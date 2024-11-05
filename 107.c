#include<stdio.h>
int main()
{
   int x1,y1,x2,y2,x3,y3;
   scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
   int kq=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
   if(kq==0)
   {
    printf("1");
   }
   else
   {
    printf("0");
   }
   return 0;
}