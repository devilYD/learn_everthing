#include <stdio.h>
#include <math.h>
int absmax(int a, int b);

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);

    d = absmax(a, b);
    d = absmax(d, c);

    printf("%d", d);

    return 0;
}

int absmax(int a, int b)
{
    int c, d;
    c = abs(a);
    d = abs(b);
    if (c >= d)
        return a;
    else
        return b;
}

/* 
题目描述：
    输入3个整数，输出绝对值最大的那个数。
输入：
    输入包含3个int范围内的整数，用空格隔开。
输出：
    输出三个数中绝对值最大的数，单独占一行。
    若绝对值最大的数不唯一，则输出最先出现的
    那个。例如，若输入为1 -3 3，则输出为-3；
    若输入为1 3 -3则输出为3。
示例：
    1 2 -3
    -3
 */