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
��Ŀ������
    һ���������������ż�������ԣ����ҽ��� ÿ�С�ÿ���ܺ�Ϊż
    ����������ż����1�����������4*4�ľ���;�����ż�������ԣ�
    1 0 1 0
    0 0 0 0
    1 1 1 1
    0 1 0 1
    ��д���򣬶���һ��n�׷��󲢼�����Ƿ������ż�������ԡ����
    û�У���ĳ���Ӧ���ټ��һ�����Ƿ����ͨ���޸�һλ����0��Ϊ
    1����1��Ϊ0����ʹ��������ż�������ԣ���������ܣ���������
    ����Ϊ���ƻ��ˡ�
���룺
    ��һ����һ������n ( 0< n < 100 )������÷���Ľ�����Ȼ����
    ��n �У�ÿ��n��������0��1����
�����
    ��������ǲ������������OK���������ͨ��ֻ�޸ĸþ����е�һλ
    ��ʹ����Ϊ���������������Change bit(i,j)��������i��j�Ǳ���
    �ĵ�Ԫ�ص������У��У��кŴ�0��ʼ�������������Corrupt����
ʾ����
    4
    1 0 1 0
    0 0 0 0
    1 1 1 1
    0 1 0 1
    OK
 */