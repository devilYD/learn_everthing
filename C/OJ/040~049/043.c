#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int i, n, a, m;

    scanf("%d", &n);
    scanf("%d", &m);

    for (size_t i = 1; i < n; i++)
    {
        scanf("%d", &a);
        m = max(m, a);
    }
    printf("%d", m);

    return 0;
}

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/* 
��Ŀ������
    ����һ������n��n�������������n�����������ֵ��
���룺
    ���������У���һ����һ��������n���ڶ�����n��������
�����
    �������һ����������n�����е����ֵ������ռһ�С�
ʾ����
    4
    3 7 5 6
    7
 */