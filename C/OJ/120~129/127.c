#include <stdio.h>
int Multiplication(int a[][1000], int b[][1000], int p, int t, int s);
int scangroup(int a[][1000], int m, int n);
int printgroup(int a[][1000], int n, int m);

int main(void)
{
    int m, p, n;
    int a[1000][1000] = {0}, b[1000][1000] = {0};
    int ans[1000][1000] = {0};

    scanf("%d %d %d", &m, &p, &n);
    scangroup(a, m, p);
    scangroup(b, p, n);

    for (int i = 0; i < m; i++)
    {
        for (int t = 0; t < n; t++)
        {
            ans[i][t] = Multiplication(a, b, p, i, t);
        }
    }

    printgroup(ans, m, n);

    return 0;
}

int Multiplication(int a[][1000], int b[][1000], int p, int t, int s)
{
    int sum = 0;
    for (int i = 0; i < p; i++)
    {
        sum = sum + a[t][i] * b[i][s];
    }
    return sum;
}
int scangroup(int a[][1000], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int t = 0; t < n; t++)
        {
            scanf("%d", &a[i][t]);
        }
    }
    return 0;
}
int printgroup(int a[][1000], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int t = 0; t < m; t++)
        {
            printf(" %d" + !t, a[i][t]);
        }
        printf("\n");
    }
    return 0;
}

/* 
题目描述：
    计算两个矩阵A和B的乘积。
输入：
    第一行三个正整数m、p和n，0<=m,n,p<=10，表示矩阵A是m行p列，矩
    阵B是p行n列；接下来的m行是矩阵A的内容，每行p个整数，用空格隔开；
    最后的p行是矩阵B的内容，每行n个整数，用空格隔开。
输出：
    输出乘积矩阵：输出占m行，每行n个数据，以空格隔开。
示例：
    2 3 4

    1 0 1
    0 0 1

    1 1 1 3
    4 5 6 7
    8 9 1 0
    
    9 10 2 3
    8 9 1 0
 */