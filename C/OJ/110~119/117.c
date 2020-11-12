#include <stdio.h>

void del(int a[], int n, int i);
void PrintArr(int a[], int n);
int find(int a[], int n, int x);

int main(void)
{
    int n, a[10], x, t;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    t = find(a, n, x);
    if (t == -1)
        printf("Not Found");
    else
    {
        del(a, n, t);
        PrintArr(a, n - 1);
    }
    return 0;
}

void del(int a[], int n, int i)
{
    for (int t = i; t < n; t++)
    {
        a[t] = a[t + 1];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int find(int a[], int n, int x)
{
    int t = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            t = i;
        if (t != -1)
            break;
    }
    return t;
}

/* 
题目描述：
    输入n个整数构成一个数组，在这个数组中查找x是否存在，
    如果存在，删除x，并输出删除元素后的数组。如果不存在，
    输出“Not Found”。定义一个查找函数find(),在数组a中
    查找x，若找不到函数返回-1，若找到返回x的下标，函数
    原型如下：
    int find(int a[], int n, int x);
    然后在main()中，先调用函数find(),若查找失败输出“No
    t Found"；若查找成功，则调用上一题中定义的函数del()
    删除该元素，再调用上一题中的PrintArr()输出删除元素
    后的数组内容
输入：
    输入第一行是一个正整数n（1<=n<=10）；
    第二行是n个整数，构成一个数组；
    第三行是一个整数x，表示待查找元素。
输出：
    输出删除元素后的数组，每个元素占4列，右对齐。如果不存
    在，输出“Not Found”。如果数组中有多个x，只删除下标最
    小的那个。
示例：
    6
    3 6 2 4 7 9
    4
       3   6   2   7   9
 */