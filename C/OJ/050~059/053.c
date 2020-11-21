#include <stdio.h>

int main(void)
{
    int i, flag;
    double x, n, d, sum;
    sum = 0;

    scanf("%lf", &x);
    n = x;
    d = 1;
    flag = 1;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + flag * n / d;
        flag = -flag;
        n = n * x * x;
        d = d * (i * 2) * (i * 2 + 1);
    }
    printf("%.3f\n", sum);
    return 0;
}

/* 
题目描述：
    输入x，计算正弦函数的前10项和。
输入：
    输入一个实数x。
输出：
    输出一个实数，即数列的前10项和，结果保留3位小数。
示例：
    1
    0.841
 */