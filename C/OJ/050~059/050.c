#include <stdio.h>

int main(void)
{
    double n, x, y;
    int i;

    scanf("%lf", &n);
    y = 0;
    x = 1;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
        y = y + x;
    }

    printf("%.0f", y);

    return 0;
}

/* 
题目描述：
    求1! + 2! + ……n!
输入：
    输入一个整数n，你可以假定n不大于10。
输出：
    输出一个整数，即阶乘累加的结果，单独占一行。
示例：
    4
    33
 */