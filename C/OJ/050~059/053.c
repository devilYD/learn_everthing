#include <stdio.h>

int main(void)
{
    int i, flag;
    double x, n, d, sum;
    sum = 0;

    scanf("%lf", &x);
    n = x;
    d = 1;
    flag = 1;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + flag * n / d;
        flag = -flag;
        n = n * x * x;
        d = d * (i * 2) * (i * 2 + 1);
    }
    printf("%.3f\n", sum);
    return 0;
}

/* 
��Ŀ������
    ����x���������Һ�����ǰ10��͡�
���룺
    ����һ��ʵ��x��
�����
    ���һ��ʵ���������е�ǰ10��ͣ��������3λС����
ʾ����
    1
    0.841
 */