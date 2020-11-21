#include <stdio.h>

int main(void)
{
    int a, b;

    while (scanf("%d%d", &a, &b), a != 0 || b != 0)
        printf("%d\n", a + b);

    return 0;
}

/* 
题目描述：
    计算A+B
输入：
    输入数据有多组。
    每组一行，为两个整数A, B。输入0 0表示输入结束，该组输入不用处理。
输出：
    对每行输入，输出A+B的值，单独占一行。
示例：
    1 2
    0 0
    3
 */