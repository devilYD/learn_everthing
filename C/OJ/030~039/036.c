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
题目描述：
    给你一个年份和月份，求该月有多少天
输入：
    一个年份（正整数），一个月份（1-12），中间有一个空格隔开
输出：
    该月的天数，单独占一行。
示例：
    2012 2
    29
 */