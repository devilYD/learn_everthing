#include <stdio.h>
#include <math.h>
int absmax(int a, int b);

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);

    d = absmax(a, b);
    d = absmax(d, c);

    printf("%d", d);

    return 0;
}

int absmax(int a, int b)
{
    int c, d;
    c = abs(a);
    d = abs(b);
    if (c >= d)
        return a;
    else
        return b;
}

/* 
��Ŀ������
    ����3���������������ֵ�����Ǹ�����
���룺
    �������3��int��Χ�ڵ��������ÿո������
�����
    ����������о���ֵ������������ռһ�С�
    ������ֵ��������Ψһ����������ȳ��ֵ�
    �Ǹ������磬������Ϊ1 -3 3�������Ϊ-3��
    ������Ϊ1 3 -3�����Ϊ3��
ʾ����
    1 2 -3
    -3
 */