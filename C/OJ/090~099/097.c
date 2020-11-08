#include <stdio.h>

int getScore(char g);

int main(void)
{
    char a;
    float num = 0, i = 0;
    float asw;

    while (scanf("%c", &a) != EOF)
    {
        num = num + getScore(a);
        i++;
    }
    asw = num / (i - 1);
    printf("%.1f", asw);
    return 0;
}

int getScore(char g)
{
    if (g == 'A')
    {
        return 95;
    }
    else if (g == 'B')
    {
        return 85;
    }
    else if (g == 'C')
    {
        return 75;
    }
    else if (g == 'D')
    {
        return 65;
    }
    else if (g == 'E')
    {
        return 40;
    }
    else
    {
        return 0;
    }
}

/* 
题目描述：
    输入某位同学各门课的成绩，输出平均成绩。输入的成绩
    均为五级制成绩，五级制成绩转换为百分之成绩的规则如
    下：'A'转换为百分之成绩为95分，'B'对应85分，C对应
    75分，'D'对应65分，'E'对应40分。 输出的平均成绩为
    一个实数，保留1位小数。 要求程序定义一个getScore()
    函数和一个main()函数，getScore()函数返回一个等级
    对应的分数，其余功能在main()函数中实现。
    int getScore(char g)
    { 
    //把等级g转换成对应的分数并返回这个分数。 
    }
    对于C/C++代码的提交，本题要求必须通过定义getScore
    函数和main函数实现，否则，提交编译错误，要提交完整
    的程序。
输入：
    输入为一行只包含'A'~'E'的字母，每个字母表示一门课
    的成绩。
输出：
    输出平均成绩，为一个实数，保留一位小数。
示例：
    AABB
    90.0
 */