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
��Ŀ������
    ��֪����2012-1-1�Ǹ���ĵ�1�죬��9999-9-9�أ�����һ����
    ������ڣ�����������Ǹ���ĵڼ��졣
���룺
    ����һ�����ڣ���ʽΪ��Year-month-day��year��С��9999����
    ������
�����
    һ����������ʾ�������Ǹ���ĵڼ��졣
ʾ����
    2012-3-1
    61
 */