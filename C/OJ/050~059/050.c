#include <stdio.h>

int main(void)
{
    double n, x, y;
    int i;

    scanf("%lf", &n);
    y = 0;
    x = 1;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
        y = y + x;
    }

    printf("%.0f", y);

    return 0;
}

/* 
��Ŀ������
    ��1! + 2! + ����n!
���룺
    ����һ������n������Լٶ�n������10��
�����
    ���һ�����������׳��ۼӵĽ��������ռһ�С�
ʾ����
    4
    33
 */