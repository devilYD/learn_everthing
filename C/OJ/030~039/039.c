#include <stdio.h>

int main(void)
{
    int i, a, b, c;

    c = 0;

    scanf("%d", &a);

    for (size_t i = 0; i < a; i++)
    {
        scanf("%d", &b);
        c = c + b;
    }

    printf("%d", c);

    return 0;
}

/* 
题目描述：
    输入一个整数n和n个整数，输出这n个整数的和。
输入：
    输入有两行：第一行是一个正整数n，第二行是n个整数。
输出：
    输出一个整数，即n个数的和。输出单独占一行。
示例：
    3
    7 3 2
    12
 */