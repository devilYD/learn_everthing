#include<stdio.h>
int pyear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ryear[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int daynumber(int year,int month,int day);

int main(void)
{
    int y,m,d;

    scanf("%d-%d-%d",&y,&m,&d);

    printf("%d",daynumber(y,m,d));

    return 0;
}

int daynumber(int year,int month,int day)
{
    int days=0;

    if (month<=2)
    {
        days=(month-1)*31+day;
    }
    else
    {
        if ((year%400 == 0 )||( year%4 ==0 )&&(year %100 != 0))
        {
            for (int i = 0; i < month-1; i++)
            {
                days=days+ryear[i];
            }
            days=days+day;
        }
        else
        {
            for (int i = 0; i < month-1; i++)
            {
                days=days+pyear[i];
            }
            days=days+day;
        }
    }

    return days;
}

/* 
题目描述：
    你知道，2012-1-1是该年的第1天，而9999-9-9呢？给你一个具
    体的日期，计算该日期是该年的第几天。
输入：
    输入一个日期，格式为：Year-month-day。year是小于9999的正
    整数。
输出：
    一个整数，表示该日期是该年的第几天。
示例：
    2012-3-1
    61
 */