#include<stdio.h> 
//cong thuc tinh thu  date = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) + (365 * (year + 4800 - ((14 - month) / 12))) + ((year + 4800 - ((14 - month) / 12)) / 4) - ((year + 4800 - ((14 - month) / 12)) / 100) + ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;
int main()
{
    int day,month,year;
    scanf("%d%d%d",&day,&month,&year);
     int date;
    date = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) + (365 * (year + 4800 - ((14 - month) / 12))) + ((year + 4800 - ((14 - month) / 12)) / 4) - ((year + 4800 - ((14 - month) / 12)) / 100) + ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;
    
     if((date==6))
     {
        printf("SUNDAY");
     }
     else if(date==0)
     {
        printf("MONDAY");
     }
     else if(date==1)
     {
        printf("TUESDAY");
     }
     else if(date==2)
     {
        printf("WEDNESDAY");
     }
     else if(date==3)
     {
        printf("THURSDAY");
     }
     else if(date==4)
     {
        printf("FRIDAY");
     }
     else 
     {
        printf("SATURDAY");
     }
     return 0;
}