#include <stdio.h>
void pp(int a[], int n);

int main(void)
{
    int first[10000];
    int ans[10000][2];
    int t = 0, i, max;

    for (i = 0; t == 0; i++)
    {
        scanf("%d", &first[i]);
        if (first[i] < 0)
            t = 1;
    }

    pp(first, i);
    t = 0;

    for (int t = 0; t < i; t++)
        ans[t][1] = 0;

    for (size_t f = 0; f < i; f++)
    {
        ans[t][0] = first[f];
        ans[t][1] = ans[t][1] + 1;
        if (first[f] != first[f + 1])
            t = t + 1;
    }
    i = 0, max = ans[0][1];
    for (int f = 0; f < t; f++)
    {
        if (ans[f][1] > max)
            max = ans[f][1];
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i][1] == max)
            printf("%d ", ans[i][0]);
    }
    return 0;
}

void pp(int a[], int n)
{
    int tem;
    for (int i = 0; i < n - 1; i++)
    {
        for (int t = 0; t < n - i - 1; t++)
        {
            if (a[t] > a[t + 1])
            {
                tem = a[t];
                a[t] = a[t + 1];
                a[t + 1] = tem;
            }
        }
    }
}

/* 
题目描述：
    北京校友会每年举办两次，所有校友都有校友编号，每次到会的校友
    都在签到簿上写下自己的编号和姓名，在校友会成立5周年的聚会上
    将颁发“最佳校友奖”，该奖项颁发给到会次数最多的校友。现在请你
    编写程序，找出这个奖项的得主。若有多个校友并列第一，则均可获
    奖。  
输入：
    输入若干个整数，表示签到簿上的校友编号，所有编号均为0~99的整
    数，以一个负数作为输入结束的标志。
输出：
    输出出现次数最多的编号。若获奖选手有多个，则按从小到大的顺序
    输出选手编号，用空格隔开。
示例：
    4 5 3 1 3 4 2 7 -1
    3 4
 */