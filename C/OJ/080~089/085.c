#include<stdio.h>

int main(void)
{
    int n,a,sum;

    sum = 1;
    while (scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a);
            if (a%2!=0)
                sum = sum * a;
        }
        printf("%d\n",sum);
        sum = 1;
    }
    return 0;
}

/* 
题目描述：
    给你n个整数，求他们中所有奇数的乘积。
输入：
    输入数据包含多个测试实例，每个测试实例占一行，每行的第一个
    数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每
    组数据必定至少存在一个奇数。
输出：
    输出每组数中的所有奇数的乘积，对于测试实例，输出一行。
示例：
    3 1 2 3
    3
    4 2 3 4 5
    15
 */