#include <stdio.h>
#include <math.h>
int main(void)
{
    float n = 0.0;
    float i = 0.0;
    float sum = 0.0;

    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / (2 * i - 1) * pow(-1, i - 1);
    }
    printf("%.2f", sum);
    return 0;
}

/* 
题目描述：
    输入一个整数n，输出数列1-1/3+1/5-……前n项的和。
输入：
    输入只有一个整数n。
输出：
    结果保留2为小数,单独占一行。
示例：
    3
    0.87
 */