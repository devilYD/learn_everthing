#include <stdio.h>

int main(void)
{
    double n, a = 1, sum = 0;
    int i = 1, m;

    scanf("%lf", &n);

    for (i = 1; sum < n; i++)
    {
        a = a * i;
        sum = sum + a;
        m = i;
    }

    printf("m<=%d", m - 1);

    return 0;
}

/* 
题目描述：
    已知不等式 1！+2！+3！+...+m！?n,请编程对用户指定的n值计算
    并输出满足该不等式的m的整数解。
输入：
    输入一个整数n，n为int范围内的正整型。
输出：
    输出m的取值范围，具体格式见输出样例。
示例：
    2000000000
    m<=12
 */