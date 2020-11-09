#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if ((x / 10000) >= 1)
    {
        printf("5");
    }
    else if ((x / 1000) >= 1)
    {
        printf("4");
    }
    else if ((x / 100) >= 1)
    {
        printf("3");
    }
    else if ((x / 10) >= 1)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }

    return 0;
}

/* 
题目描述：
    给定一个不多于5位的正整数，判断它是几位数，并输出。
输入：
    一个不多于5位的正整数。 
输出：
    输出正整数的位数，单独占一行。
示例：
    111
    3
 */