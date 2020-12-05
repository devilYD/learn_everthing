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
��Ŀ������
    ������������A��B�ĳ˻���
���룺
    ��һ������������m��p��n��0<=m,n,p<=10����ʾ����A��m��p�У���
    ��B��p��n�У���������m���Ǿ���A�����ݣ�ÿ��p���������ÿո������
    ����p���Ǿ���B�����ݣ�ÿ��n���������ÿո������
�����
    ����˻��������ռm�У�ÿ��n�����ݣ��Կո������
ʾ����
    2 3 4

    1 0 1
    0 0 1

    1 1 1 3
    4 5 6 7
    8 9 1 0
    
    9 10 2 3
    8 9 1 0
 */