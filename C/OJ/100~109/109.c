#include <stdio.h>

int digitSum(int n);

int main(void)
{
    int n, G;

    scanf("%d", &n);
    G = digitSum(n);
    while (G >= 10)
    {
        G = digitSum(G);
    }
    printf("%d", G);
    return 0;
}

int digitSum(int n)
{
    int sum = 0;
    int a;
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    return sum;
}

/* 
题目描述：
    输入一个正整数，输出该数的数根。数根可以通过把一个
    数的各个位上的数字加起来得到。如果得到的数是一位数，
    那么这个数就是数根。如果结果是两位数或者包括更多位
    的数字，那么再把这些数字加起来。如此进行下去，直到
    得到是一位数为止。比如，对于24来说，把2和4相加得到
    6，由于6是一位数，因此6是24的数根。再比如39，把3和
    9加起来得到12，由于12不是一位数，因此还得把1和2加起
    来，最后得到3，这是一个一位数，因此3是39的数根。
    要求使用函数，定义函数digitSum(int n)求n的各位数字
    和，其余功能在main()函数中实现。
    int digitSum(int n)
    {
    //函数返回n的各位数字之和
    }
    对于C/C++代码的提交，本题要求必须通过定义digitSum函
    数和main函数实现，否则，提交编译错误，本题需要提交完
    整程序代码。
输入：
    输入一个int范围内的正整数n
输出：
    输出n的数根
示例：
    39
    3
 */