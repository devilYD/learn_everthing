#include <stdio.h>

int main(void)
{
    int point;

    scanf("%d", &point);

    if (point < 0)
        printf("输入错误");
    else if (point < 60)
        printf("E");
    else if (point < 80)
        printf("C");
    else if (point < 90)
        printf("B");
    else if (point <= 100)
        printf("A");
    else
        printf("输入错误");

    return 0;
}

/* 
题目描述：
    给定一个百分制成绩, 请根据百分制成
    绩输出其对应的等级。转换关系如下：
    90分及以上为’A’，80~89为’B’， 70~
    79为’C’， 60~69为’D’，60分以下为
    ’E’。
输入：
    一个百分制成绩（0~100的整数)。
输出：
    输出对应的等级。
示例：
    100
    A
 */