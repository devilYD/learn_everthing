#include <stdio.h>
#include <math.h>
#define L 0.0225

int main(void)
{
    double n;
    double f;
    double e;

    scanf("%lf %lf", &n, &f);

    e = f * powl(1 + L, n);

    printf("%.6lf", e);

    return 0;
}

/* 
��Ŀ������
    ������1���ڶ��ڴ��������Ϊ2.25%�����
    ����ΪdepositԪ���Ա�̼��㲢���n���
    �ı���֮��
���룺
    ����һ����������һ��ʵ�����ֱ������
    �����ʹ���
�����
    ���һ��˫����ʵ����С�������6λ��Ч
    ���֡�
ʾ����
    2 100
    104.550625
 */