#include <stdio.h>

int p2p(int n); //point to point

int main(void)
{
    int N;
    int n, p;
    float sumn = 0, sump = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &n, &p);
        sumn = sumn + n;
        sump = sump + n * p2p(p);
    }

    printf("%.1f", sump / sumn);

    return 0;
}

int p2p(int n)
{
    if (n < 60)
        return 0;
    else if (n < 70)
        return 1;
    else if (n < 80)
        return 2;
    else if (n < 90)
        return 3;
    else if (n < 100)
        return 4;
    else
        return 5;
}

/* 
题目描述：
    平均学分绩点（Grade Point Average，即GPA）是以学分与绩点
    作为衡量学生学习的量与质的计算单位，以取得一定的学分和平均
    学分绩点作为毕业和获得学位的标准，实施多样的教育规格和较灵
    活的教学管理制度。
    大学里每一门课程都有一定的学分。只有通过这门课的考试，才能
    获得相应的学分。课程绩点的计算方法通常是：（百分制成绩-50)/
    10 取整。成绩100，对应绩点为5，成绩90~99对应绩点为4，......，
    成绩60~69对应绩点为1，成绩小于60，对应绩点为0。
    平均学分绩点的计算方法是：是将学生修过的每一门课程的绩点乘以
    该门课程的学分，累加后再除以总学分。 平均学分绩点可以作为学
    生学习能力与质量的综合评价指标之一。请编程计算一个学生的平均
    学分绩点。
输入：
    输入n表示有n门课程，然后输入n门课程的学分和成绩，学分和成绩
    都是整数。
输出：
    输出平均学分绩点，保留一位小数。
示例：
    3
    2 95
    3 85
    5 75
    2.7

 */