#include <stdio.h>

int main(void)
{
    int x, y, z;
    int m;

    scanf("%d %d %d", &x, &y, &z);

    if (x >= y)
        m = x;
    else
        m = y;

    if (m >= z)
        m = m;
    else
        m = z;

    printf("%d", m);

    return 0;
}

/* 
题目描述：
    从键盘输入三个整数x,y和z，求出其中最大的数。
输入：
    输入三个整数，用空格隔开。
输出：
    输出最大整数。
示例：
    20 16 18
    20
 */