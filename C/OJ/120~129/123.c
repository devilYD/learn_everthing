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
��Ŀ������
    ����У�ѻ�ÿ��ٰ����Σ�����У�Ѷ���У�ѱ�ţ�ÿ�ε����У��
    ����ǩ������д���Լ��ı�ź���������У�ѻ����5����ľۻ���
    ���䷢�����У�ѽ������ý���䷢�������������У�ѡ���������
    ��д�����ҳ��������ĵ��������ж��У�Ѳ��е�һ������ɻ�
    ����  
���룺
    �������ɸ���������ʾǩ�����ϵ�У�ѱ�ţ����б�ž�Ϊ0~99����
    ������һ��������Ϊ��������ı�־��
�����
    ������ִ������ı�š�����ѡ���ж�����򰴴�С�����˳��
    ���ѡ�ֱ�ţ��ÿո������
ʾ����
    4 5 3 1 3 4 2 7 -1
    3 4
 */