#include <stdio.h>

void sort(int a[], int n);
void PrintArr(int a[], int n);

int main(void)
{
    int a[1000];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    PrintArr(a, n);

    return 0;
}

void sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d" + !i, a[i]);
    }
}

/* 
��Ŀ������
    ��һά���鰴�մ�С�����˳�����򡣳����庯��sort()��ʵ
    ������a�����򡣺���ԭ�����£�
    void sort(int a[], int n);
    ����Ԫ�ص��������PrintArr()��
���룺
    ��һ������һ������n��1<=n<=10)����ʾ������n���������ڶ�
    ������n��������
�����
    ���ռһ�С�����n�����������մ�С�����˳�����������֮��
    ��һ���ո������
ʾ����
    6
    6 5 1 2 3 4
    1 2 3 4 5 6
 */