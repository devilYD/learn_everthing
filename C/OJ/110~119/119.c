#include <stdio.h>

void sort(int a[], int n);
void PrintArr(int a[], int n);

int main(void)
{
    int a[1000];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    PrintArr(a, n);

    return 0;
}

void sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
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
    对一维数组按照从小到大的顺序排序。程序定义函数sort()来实
    现数组a的排序。函数原型如下：
    void sort(int a[], int n);
    数组元素的输出调用PrintArr()。
输入：
    第一行输入一个整数n（1<=n<=10)，表示数组有n个整数；第二
    行输入n个整数。
输出：
    输出占一行。对这n个整数数按照从小到大的顺序输出，数据之间
    用一个空格隔开。
示例：
    6
    6 5 1 2 3 4
    1 2 3 4 5 6
 */