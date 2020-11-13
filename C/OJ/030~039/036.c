#include <stdio.h>
#include <math.h>

int main(void)
{
    int year, month;
    int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int c[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d %d", &year, &month);
    month = month - 1;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("%d", b[month]);
    else
        printf("%d", c[month]);

    return 0;
}

/* 
��Ŀ������
    ����һ����ݺ��·ݣ�������ж�����
���룺
    һ����ݣ�����������һ���·ݣ�1-12�����м���һ���ո����
�����
    ���µ�����������ռһ�С�
ʾ����
    2012 2
    29
 */