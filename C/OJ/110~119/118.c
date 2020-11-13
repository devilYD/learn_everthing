#include <stdio.h>

int insert(int a[], int n, int num);
void PrintArr(int a[], int n);

int main(void)
{
    int a[1000], num, n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &num);

    insert(a, n, num);
    PrintArr(a, n + 1);

    return 0;
}

int insert(int a[], int n, int num)
{
    int set = num;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= num)
            break;
    }
    for (int t = i; t < n + 1; t++)
    {
        num = a[t];
        a[t] = set;
        set = num;
    }
    return 0;
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
    一个非递减有序的整型数组有n个元素，给定一个整
    数num，将num插入该序列的适当位置，使序列仍保
    持非递减有序。要求定义一个函数insert()，将整
    数num插入在数组a的适当位置上，函数原型如下：
    int insert(int a[], int n, int num);
    另外函数仍然调用以前定义过的函数PrintArr()输出
    数组所有元素。
输入：
    输入有三行。第一行是一个正整数n，n<=1000。第二行
    是n个整数，第三行是待插入整数num。
输出：
    输出非递减有序的n+1个整数，数据之间用空格隔开。输
    出占一行。
示例：
    5
    1 2 4 5 6
    3
    1 2 3 4 5 6
 */