#include <stdio.h>

int MinIndex(int a[], int n);
int MaxIndex(int a[], int n);
void PrintArr(int a[], int n);

int main(void)
{
    int n;
    int a[1000], max, min, tem;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = MinIndex(a, n);
    tem = a[min];
    a[min] = a[0];
    a[0] = tem;
    max = MaxIndex(a, n);
    tem = a[max];
    a[max] = a[n - 1];
    a[n - 1] = tem;
    PrintArr(a, n);
    return 0;
}

int MinIndex(int a[], int n)
{
    int min = a[0], t = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            t = i;
            min = a[i];
        }
    }
    return t;
}
int MaxIndex(int a[], int n)
{
    int min = a[0], t = 0;
    for (int i = 1; i < n; i++)
    {
        if (min < a[i])
        {
            t = i;
            min = a[i];
        }
    }
    return t;
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
    ��һ������Ϊn���������С���дһ�������Ȱ������е���Сֵ���һ��
    ���������ٰ����ֵ�����һ�������������ת���õ����С� �ֱ��д��
    ������MinIndex()��MaxIndex()��������Сֵ�±�����ֵ�±ꡣ
    int MinIndex(int a[], int n);  //������������a����СԪ�ص��±�
    int MaxIndex(int a[], int n);  //������������a�����Ԫ�ص��±�
    ����Ԫ�ص�������ú���PrintArr()��
���룺
    ����������С�
    ��һ��Ϊ������n��1��n��10����
    �ڶ���Ϊn����������ɵ����У���֤û���ظ�Ԫ�ء�
�����
    ���ת���õ����С�����֮���ÿո������
ʾ����
    5
    5 4 1 2 3
    1 4 3 2 5
 */