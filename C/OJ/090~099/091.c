#include <stdio.h>
#include <stdlib.h>
#define N 41

int main()
{
    int n, i;
    long int f[N] = {0};
    for (i = 3; i <= 41; i++)
    {
        f[1] = 1, f[2] = 2;
        f[i] = f[i - 1] + f[i - 2];
    }
    while (1)
    {
        scanf("%d", &n);
        if (n != 0)
        {
            printf("%d\n", f[n]);
        }
        else
            return 0;
    }
    return 0;
}

/* 
题目描述：
    Redraiment小时候走路喜欢蹦蹦跳跳，他最喜欢在楼梯
    上跳来跳去。 但年幼的他一次只能走上一阶或者一下子
    蹦上两阶。 现在一共有N阶台阶，请你计算一下Redrai
    ment从第0阶到第N阶共有几种走法。
输入：
    输入包括多组数据。 每组数据包括一行:N(1≤N≤40)。 
    输入以0结束
输出：
    对应每个输入包括一个输出。 为redraiment到达第n阶
    不同走法的数量。
示例：
    1
    1
    3
    3
    0
 */