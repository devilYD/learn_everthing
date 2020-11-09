#include <stdio.h>

int inverse(int n);

int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d",n+inverse(n));

    return 0;
}

int inverse(int n)
{
    int a[30];
    int t;

    for (size_t i = 0; i < 30; i++)
    {
        a[i] = 0;
    }

    for (t = 0; n != 0; t++)
    {
        a[t] = n % 10;
        n = n / 10;
    }
    for (int i = 0; i < t; i++)
    {
        n = n * 10 + a[i];
    }
    return n;
}

/* 
题目描述：
    输入一个正整数n，计算n的逆序数m，输出m与n的和。要求程序
    定义一个inverse()函数和一个main()函数，inverse()函数
    接收一个整数值,返回这个数中数字逆序后的结果值。例如,给定
    数7631,函数返回1367 。
    int inverse(int n)
    {
    //计算并返回n的逆序数字
    }
    本题如果是C/C++代码提交，只需要提交inverse函数的定义部
    分，提交其它内容，编译出错。
输入：
    一个正整数n，输入保证计算结果在int范围内。
输出：
    输出一个整数，n与n的逆序数的和。输出占一行。
示例：
    1780
    2651
 */