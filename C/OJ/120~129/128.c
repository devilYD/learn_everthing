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
��Ŀ������
    ��ĩ���Խ������������õ��˱���ѧ���ĳɼ����ܱ���m��n����
    ��(���๲��m��ѧ������ѧ����n�ſγ�),ÿ����һ��ͬѧ��n�ſ�
    �̳ɼ������д���򣬼��㲢���ÿ�ſε�ƽ���֣��������2λС
    ����
���룺
    ��һ������������m��n����ʾ����������ͱ�ѧ�ڿγ���Ŀ��0<m<=
    1000��0<n<=10���������ǳɼ�������m�У�ÿ��n��ʵ��
�����
    ���һ�У���n��ʵ����������λС������ʾÿ�ſε�ƽ���֣��ÿ�
    �������
ʾ����
    5 4
    80 65 70 95
    99 38 59 90
    30 78 81 85
    90 43 13 80
    65 87 79 80
    72.80 62.20 60.40 86.00
 */