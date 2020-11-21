#include <stdio.h>
int find_min(const int list[], int n, int i);
void select_min_to_max(int list[], int n);

int main(void)
{
    int a[50], i = 0, c = 1;
    for (i = 0; i < 50; i++)
        a[i] = 0;
    i = 0;
    while (c == 1)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
            c = -1;
        i++;
    }
    select_min_to_max(a, 50);
    printf("%d", a[49]);

    return 0;
}

int find_min(const int list[], int n, int i)
{
    int min, u;
    min = i;
    for (u = i; u < n - 1; u++)
    {
        if (list[min] <= list[u + 1])
            min = min;
        else
            min = u + 1;
    }
    return min;
}
void select_min_to_max(int list[], int n)
{
    int i = 0;
    int min = 0;
    int f = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = find_min(list, n, i);
        f = list[min];
        list[min] = list[i];
        list[i] = f;
    }
}

/* 
题目描述：
    输入一批学生的成绩（整数），输出最高分。
输入：
    输入包含多个非负整数和一个负整数。该负数不作为有效成绩，
    只表示输入结束。
输出：
    输出一个整数，即最高分。单独占一行。
示例：
    7 6 5 9 2 -1
    9
 */