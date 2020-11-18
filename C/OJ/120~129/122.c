#include <stdio.h>
void pp(int a[], int n);
void del(int a[], int n, int i);
int delsame(int a[], int n);

int main(void)
{
    int a[10000];
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    pp(a, N);
    N = delsame(a, N);
    printf("%d\n", N);
    for (int i = 0; i < N; i++)
    {
        printf(" %d" + !i, a[i]);
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
void del(int a[], int n, int i)
{
    for (int t = i; t < n; t++)
    {
        a[t] = a[t + 1];
    }
}
int delsame(int a[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            del(a, n, i);
            n = n - 1;
            i = i - 1;
        }
    }
    return n;
}

/* 
题目描述：
    小明的老师布置了一份调查作业，小明想在学校中随机找N个同
    学一起做一项问卷调查，聪明的小明为了实验的客观性，他先随
    机写下了N个1到1000之间的整数（0<N≤1000），不同的数对应
    着不同的学生的学号。但他写下的数字难免会有重复数字，小明
    希望能把其余重复的数去掉，然后再把这些数从小到大排序，按
    照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”
    的工作。
输入：
    输入有2行，第1行为1个正整数，表示整数的个数:N.
    第2行有N个用空格隔开的正整数，表示小明写下的N个整数。
输出：
    输出也是2行，第1行为1个正整数M，表示不相同的整数的个数。第
    2行为M个用空格隔开的正整数，为从小到大排好序的不相同的整数。
示例：
    10
    20 40 32 67 40 20 89 300 400 15
    8
    15 20 32 40 67 89 300 400
 */