#include <stdio.h>
int AreBool(int a[][1000], int n);

int main(void)
{
    int a[1000][1000];
    int n, change = 0, j = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int t = 0; t < n; t++)
        {
            scanf("%d", &a[i][t]);
        }

    if (AreBool(a, n))
    {
        printf("OK");
    }
    else
    {
        for (int i = 0; i < n; i++)
            for (int t = 0; t < n; t++)
            {
                if (a[i][t] == 1)
                {
                    change = 1;
                    a[i][t] = 0;
                    if (AreBool(a, n))
                    {
                        printf("Change bit(%d,%d)", i, t);
                        j = 1;
                        break;
                    }
                    a[i][t] = change;
                }
                if (a[i][t] == 0)
                {
                    change = 0;
                    a[i][t] = 1;
                    if (AreBool(a, n))
                    {
                        printf("Change bit(%d,%d)", i, t);
                        j = 1;
                        break;
                    }
                    a[i][t] = change;
                }
            }
        if (j == 0)
        {
            printf("Corrupt");
        }
    }
    return 0;
}

int AreBool(int a[][1000], int n)
{
    int really = 1;
    int sum;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int t = 0; t < n; t++)
        {
            sum = sum + a[i][t];
        }
        if (sum % 2 != 0)
            really = 0;
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int t = 0; t < n; t++)
        {
            sum = sum + a[t][i];
        }
        if (sum % 2 != 0)
            really = 0;
    }
    return really;
}

/* 
题目描述：
    一个布尔方阵具有奇偶均势特性，当且仅当 每行、每列总和为偶
    数，即包含偶数个1。如下面这个4*4的矩阵就具有奇偶均势特性：
    1 0 1 0
    0 0 0 0
    1 1 1 1
    0 1 0 1
    编写程序，读入一个n阶方阵并检查它是否具有奇偶均势特性。如果
    没有，你的程序应当再检查一下它是否可以通过修改一位（把0改为
    1，把1改为0）来使它具有奇偶均势特性；如果不可能，这个矩阵就
    被认为是破坏了。
输入：
    第一行是一个整数n ( 0< n < 100 )，代表该方阵的阶数。然后输
    入n 行，每行n个整数（0或1）。
输出：
    如果矩阵是布尔矩阵，输出“OK”；如果能通过只修改该矩阵中的一位
    来使它成为布尔矩阵，则输出“Change bit(i,j)”，这里i和j是被修
    改的元素的行与列（行，列号从0开始）；否则，输出“Corrupt”。
示例：
    4
    1 0 1 0
    0 0 0 0
    1 1 1 1
    0 1 0 1
    OK
 */