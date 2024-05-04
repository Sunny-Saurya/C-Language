#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date_month_day{
        int day;
        char month[10];
        int year;
    }date;

    date d, e;
    d.day = 2;
    strcpy(d.month,"February");
    d.year = 2020;

    e.day = 2;
    strcpy(e.month,"March");
    e.year = 2020;

    printf("%d / %s / %d\n",d.day,d.month,d.year);
    printf("%d / %s / %d \n",e.day,e.month,e.year);

    // if(d == e) printf("The dates are different"); // throws an error. we can not compare user defined structure like this. instead of this we can compare individually like. d.day == e.day 
    // else pritnf("The date is same");

    bool flag = true;
    if(d.day != e.day) flag = false;
    if(d.month != e.month) flag = false;
    if(d.year != e.year) flag = false;

    if(flag == true) printf("The dates are same");
    else printf("The dates are different");

}