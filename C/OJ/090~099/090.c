#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sum;
    int c;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = 1;
        scanf("%d %d", &a, &b);
        for (int i = 0; i < b; i++)
        {
            sum = sum * a;
            while(sum>999)
            {
                sum=sum%1000;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

/* 
题目描述：
    求A^B的最后三位数表示的整数（1<=A,B<=1000）
输入：
    第一行输入一个整数n，表示有n个测试实例，接着
    有n行，每行一个实例，给出两个正整数A,B
输出：
    针对每个测试实例，输出A^B的最后三位（没有前
    导0） ，单独占一行。
示例：
    2
    2 3
    8
    12 6
    984
 */