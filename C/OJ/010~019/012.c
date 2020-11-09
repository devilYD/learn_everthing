#include <stdio.h>
#include <math.h>
int main(void)
{
    float r;

    scanf("%f", &r);

    r = fabs(r);

    printf("%.2f", r);

    return 0;
}

/* 
题目描述：
    求实数的绝对值。
输入：
    输入一个实数。 
输出：
    输出它的绝对值，结果保留两位小数。
示例：
    -234.00
    234.00
 */