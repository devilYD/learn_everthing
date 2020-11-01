#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d %d %d %d %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);

    return 0;
}
/* 
题目描述：
    输入两个整数num1和num2，请你设计一个程序，计算并输出它们的
    和、差、积、整数商及余数。

输入：
    输入只有两个正整数num1、num2。

输出：
    输出占一行，包括两个数的和、差、积、商及余数，数据之间用一个
    空格隔开。

示例：
    1 2
    3 -1 2 0 1

 */