#include <stdio.h>
int l2l(int m, int n);

int main(void)
{
    int N, m, n;
    int time = 0;

    scanf("%d", &N);
    m = 0;
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &n);
        time = time + l2l(m, n);
        m = n;
    }
    printf("%d", time);
    return 0;
}

int l2l(int m, int n)
{
    if (m == n)
        return 5;
    else if (m > n)
        return 4 + l2l(m - 1, n);
    else if (m < n)
        return 6 + l2l(m + 1, n);
}

/* 
��Ŀ������
    ��ĳһ�߲㽨����ֻ��һ�����ݣ����㰴��һ����ʱ�����ݻ�����
    ����һ�㡣��֪����ÿ����һ����6�룬�½�һ����4�룬����Ҫͣ
    �����ǲ�ͣ��5�롣����N��������ɵ�һ�������б������ݽ�����
    ��Ӧ�����ݴ�0�㿪ʼ���У��������й��̽���֮ǰ���᷵��0�㡣
    ע�⣬��������������������ȣ�������ͬһ��ִ����������ͬ��
    �񣬿�������Ϊ�������Ѿ�ͣ��5�룬��Ҫ����ʱ��������ͬһ�㰴
    ���ż��������ֿ��Ų�ͣ��5�롣
���룺
    ��������У���һ����һ��������N��N<=1000)������ͣ�����Σ���
    ���е�N�����ִ����⼸������ͣ����¥�㡣
�����
    ���������ɸ��������������ʱ�䣬����ռһ�С�
ʾ����
    3 
    2 3 1
    41

 */