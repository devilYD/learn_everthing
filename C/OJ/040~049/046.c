#include <stdio.h>

int main(void)
{
    int i, a, b;
    int s = 1;

    scanf("%d", &a);

    for (size_t i = 0; i < a; i++)
    {
        scanf("%d", &b);

        if (b % 2 == 1)
        {
            s = s * b;
        }
    }

    printf("%d", s);

    return 0;
}

/* 
题目描述：
    给你n个整数，求他们中所有奇数的乘积。
输入：
    第一个数为n，表示本组数据一共有n个，接着是n个
    整数，你可以假设每组数据必定至少存在一个奇数。
输出：
    输出n个数中的所有奇数的乘积，占一行。
示例：
    5 2 5 4 6 7
    35
 */