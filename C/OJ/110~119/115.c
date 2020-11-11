#include <stdio.h>

int main(void)
{
    int n, min, s = 0;
    int a[1000];

    scanf("%d", &n);

    scanf("%d", &a[0]);
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (min > a[i])
        {
            min = a[i];
            s = i;
        }
    }

    printf("%d %d", min, s);
    return 0;
}

/* 
题目描述：
    数组a有n个元素，请输出n个元素的最小值及其下标。
    若最小值有多个，请输出下标最小的一个。注意，有
    效下标从0开始。
输入：
    输入分两行，第一行是一个正整数n（n<=1000)，第
    二行是n个整数。
输出：
    输出占一行。输出数组的最小值及其下标，用空格隔
    开。
示例：
    5
    8 4 5 1 2
    1 3
 */