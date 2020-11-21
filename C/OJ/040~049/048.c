#include <stdio.h>

int main(void)
{
    double x, n, i;

    scanf("%lf", &n);
    i = 1.0;
    x = 1.0;
    while (i <= n)
    {
        x = i * x;
        printf("%-4.0f%-20.0f\n", i, x);
        i = i + 1;
    }
    return 0;
}

/* 
题目描述：
    输入一个正整数n(n<=20)，输出1到n之间阶乘表。
输入：
    输入只有一个正整数n。
输出：
    输出1到n之间的阶乘表，格式见输出样例。每行两
    个数据，第一个数据占4列，第二个数据占20列，左
    对齐。
示例：
    5
    1   1                   
    2   2                   
    3   6                   
    4   24                  
    5   120   
 */