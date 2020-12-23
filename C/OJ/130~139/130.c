#include <stdio.h>

int main(void)
{
    long YH[50][50] = {0};
    int n;

    YH[0][1] = 1;
    for (int i = 1; i < 31; i++)
    {
        for (int t = 1; t < 31; t++)
        {
            YH[i][t] = YH[i - 1][t - 1] + YH[i - 1][t];
        }
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int t = 1; t <= i + 1; t++)
        {
            printf(" %d" + !(t - 1), YH[i][t]);
        }
        printf("\n");
    }

    return 0;
}

/* 
题目描述：
    还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参
    考以下的图形：
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
输入：
    输入只包含一个正整数n（1 <= n <= 30），表示将要输出的杨辉三角的
    层数。
输出：
    输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开。
示例：
    4
    1
    1 1
    1 2 1
    1 3 3 1
 */