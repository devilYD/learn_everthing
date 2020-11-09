#include <stdio.h>
#include <math.h>
#define L 0.0225

int main(void)
{
    double n;
    double f;
    double e;

    scanf("%lf %lf", &n, &f);

    e = f * powl(1 + L, n);

    printf("%.6lf", e);

    return 0;
}

/* 
题目描述：
    设银行1年期定期存款年利率为2.25%，存款
    本金为deposit元，试编程计算并输出n年后
    的本利之和
输入：
    输入一个正整数和一个实数，分别代表存款
    年数和存款本金。
输出：
    输出一个双精度实数，小数点后保留6位有效
    数字。
示例：
    2 100
    104.550625
 */