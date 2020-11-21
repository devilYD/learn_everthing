#include <stdio.h>

int main()
{
    double m, n, x, y;
    int i;

    scanf("%lf %lf", &m, &n);
    y = 0;
    x = 0;
    for (i = m; i <= n; i++)
    {
        if (i % 2 == 1)
            y = y + i * i * i;
        else
            x = x + i * i;
    }

    printf("%.0lf %.0f", x, y);

    return 0;
}

/* 
题目描述：
    给定两个整数m和n，求出m~n这段连续的整数中所有偶数
    的平方和以及所有奇数的立方和。
输入：
    由两个整数m和n组成，你可以假定m<=n.
输出：
    应包括两个整数x和y，分别表示该段连续的整数中所有偶
    数的平方和以及所有奇数的立方和。32位整数足以保存结果。
示例：
    2 5
    20 152
 */