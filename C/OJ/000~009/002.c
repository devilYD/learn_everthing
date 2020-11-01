#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, x;

    scanf("%d", &x);
    y = 2 * x * x + x + 8;
    printf("%d\n", y);
    return 0;
}

/* 
题目描述：
    对用户输入的任一整数，输出以下多项式的值。
    y=2x2+x+8

输入：
    输入整数x的值。

输出：
    输出一个整数，即多项式的值。

示例：
    1
    11
    
 */