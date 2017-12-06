#include <stdio.h>
int main()
{
    int maxday,leap,ok,day,month,year,nextday,nextmonth,nextyear,prday,prmonth,pryear;
    do
    {
        printf("\nday=");scanf("%d",&day);
        printf("\nmonth="); scanf("%d",&month);
        printf("\nyear="); scanf("%d",&year);

    leap=0; //defining a leap year
    if (year%4==0)
    {
        if(year%100!=0) leap=1;
        else if (year%400==0) leap=1;
    }
    switch(month) //defining max amounth of days in a month
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: maxday=31; break;
        case 4: case 6: case 11: maxday=30; break;
        case 2: if(leap) maxday=29; else maxday=28; break;
    }
        ok=1; //checking if the date is valid
        if(day<1) ok=0;
        if(day>maxday) ok=0;
        if(month<1) ok=0;
        if(month>12) ok;
    } while(!ok);
    if(day==maxday) //adding 1 day
    {
        if(month==12) {nextday=1,nextmonth=1,nextyear=year+1;}
        else {nextday=1,nextmonth=month+1;nextyear=year;};
    }
    else {nextday=day+1,nextmonth=month,nextyear=year;};
    printf("\nThe next date is %d",nextday); printf(".%d",nextmonth); printf(".%d",nextyear);

    if(day==1) //subtracting 1 day
    {
        if(month==1) {prday=31,prmonth=12,pryear=year-1;}
        else {prday=maxday,prmonth=month-1,pryear=year;};
    }
    else {prday=day-1,prmonth=month,pryear=year;}
    printf("\nThe previous date is %d",prday); printf(".%d",prmonth); printf(".%d",pryear);
}
