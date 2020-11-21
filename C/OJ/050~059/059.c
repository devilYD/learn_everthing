#include <stdio.h>
int find_min(const int list[], int n, int i);
void select_min_to_max(int list[], int n);

int main(void)
{
    int a[50], i = 0, c = 1;
    for (i = 0; i < 50; i++)
        a[i] = 0;
    i = 0;
    while (c == 1)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
            c = -1;
        i++;
    }
    select_min_to_max(a, 50);
    printf("%d", a[49]);

    return 0;
}

int find_min(const int list[], int n, int i)
{
    int min, u;
    min = i;
    for (u = i; u < n - 1; u++)
    {
        if (list[min] <= list[u + 1])
            min = min;
        else
            min = u + 1;
    }
    return min;
}
void select_min_to_max(int list[], int n)
{
    int i = 0;
    int min = 0;
    int f = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = find_min(list, n, i);
        f = list[min];
        list[min] = list[i];
        list[i] = f;
    }
}

/* 
��Ŀ������
    ����һ��ѧ���ĳɼ����������������߷֡�
���룺
    �����������Ǹ�������һ�����������ø�������Ϊ��Ч�ɼ���
    ֻ��ʾ���������
�����
    ���һ������������߷֡�����ռһ�С�
ʾ����
    7 6 5 9 2 -1
    9
 */