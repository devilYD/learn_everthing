#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int i, n, a, m;

    scanf("%d", &n);
    scanf("%d", &m);

    for (size_t i = 1; i < n; i++)
    {
        scanf("%d", &a);
        m = max(m, a);
    }
    printf("%d", m);

    return 0;
}

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/* 
题目描述：
    输入一个整数n和n个整数，输出这n个整数的最大值。
输入：
    输入有两行：第一行是一个正整数n，第二行是n个整数。
输出：
    输出包含一个整数，即n个数中的最大值，单独占一行。
示例：
    4
    3 7 5 6
    7
 */