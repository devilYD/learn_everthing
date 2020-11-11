#include<stdio.h>

void inverse(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    inverse(n);
    return 0;
}

void inverse(int n)
{
    int num;
    if (n > 1)
    {
        scanf("%d", &num);
        inverse(n - 1);
        printf("%4d", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%4d", num);
    }
}

/* 
题目描述：
    输入n（1<=n<=10）和n个整数，逆序输出这n个整数。
输入：
    输入n（1<=n<=10），然后输入n个整数。
输出：
    逆序输出这n个整数，每个整数占4列，右对齐。
示例：
    6
    4 5 6 1 2 3
           3   2   1   6   5   4 
 */