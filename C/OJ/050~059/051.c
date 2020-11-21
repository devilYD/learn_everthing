#include <stdio.h>
#include <math.h>

int main(void)
{
    double iteam, n, sum;
    int i;

    scanf("%lf %lf", &iteam, &n);
    sum = iteam;
    for (i = 1; i < n; i++)
    {
        iteam = sqrt(iteam);
        sum = sum + iteam;
    }

    printf("%.2f", sum);

    return 0;
}

/* 
题目描述：
    数列的定义如下：
    数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。
输入：
    由两个整数item（item<10000）和n(n<1000)组成，item和n的含义如前
    所述。
输出：
    输出该数列的和，占一行，要求精度保留2位小数。
示例：
    84 4
    97.93
 */