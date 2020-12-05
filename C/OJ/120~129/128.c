#include <stdio.h>
int scangroup(double a[][1000], int m, int n);
int printgroup(double a[], int n);
double Average(double a[][1000], int m, int n);

int main(void)
{
    int m, n;
    double a[1000][1000] = {0}, ans[1000] = {0};

    scanf("%d %d", &m, &n);
    scangroup(a, m, n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = Average(a, m, i);
    }

    printgroup(ans, n);

    return 0;
}

int scangroup(double a[][1000], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int t = 0; t < n; t++)
        {
            scanf("%lf", &a[i][t]);
        }
    }
    return 0;
}
int printgroup(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %.2lf" + !i, a[i]);
    }
    return 0;
}
double Average(double a[][1000], int m, int n)
{
    double sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + a[i][n];
    }
    sum = sum / m;
    return sum;
}

/* 
题目描述：
    期末考试结束，班主任拿到了本班学生的成绩汇总表，由m行n列组
    成(本班共有m名学生，本学期有n门课程),每行是一个同学的n门课
    程成绩，请编写程序，计算并输出每门课的平均分，结果保留2位小
    数。
输入：
    第一行是两个整数m和n，表示本班的人数和本学期课程数目，0<m<=
    1000，0<n<=10。接下来是成绩单，有m行，每行n个实数
输出：
    输出一行，有n个实数，保留两位小数，表示每门课的平均分，用空
    格隔开。
示例：
    5 4
    80 65 70 95
    99 38 59 90
    30 78 81 85
    90 43 13 80
    65 87 79 80
    72.80 62.20 60.40 86.00
 */