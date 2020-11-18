#include <stdio.h>

int MinIndex(int a[], int n);
int MaxIndex(int a[], int n);
void PrintArr(int a[], int n);

int main(void)
{
    int n;
    int a[1000], max, min, tem;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = MinIndex(a, n);
    tem = a[min];
    a[min] = a[0];
    a[0] = tem;
    max = MaxIndex(a, n);
    tem = a[max];
    a[max] = a[n - 1];
    a[n - 1] = tem;
    PrintArr(a, n);
    return 0;
}

int MinIndex(int a[], int n)
{
    int min = a[0], t = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            t = i;
            min = a[i];
        }
    }
    return t;
}
int MaxIndex(int a[], int n)
{
    int min = a[0], t = 0;
    for (int i = 1; i < n; i++)
    {
        if (min < a[i])
        {
            t = i;
            min = a[i];
        }
    }
    return t;
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d" + !i, a[i]);
    }
}

/* 
题目描述：
    有一个长度为n的整数序列。请写一个程序，先把序列中的最小值与第一个
    数交换，再把最大值与最后一个数交换。输出转换好的序列。 分别编写两
    个函数MinIndex()和MaxIndex()来计算最小值下标和最大值下标。
    int MinIndex(int a[], int n);  //函数返回数组a中最小元素的下标
    int MaxIndex(int a[], int n);  //函数返回数组a中最大元素的下标
    数组元素的输出调用函数PrintArr()。
输入：
    输入包括两行。
    第一行为正整数n（1≤n≤10）。
    第二行为n个正整数组成的序列，保证没有重复元素。
输出：
    输出转换好的序列。数据之间用空格隔开。
示例：
    5
    5 4 1 2 3
    1 4 3 2 5
 */