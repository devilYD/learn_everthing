#include <stdio.h>
#include <math.h>
int main(void)
{
    float r;

    scanf("%f", &r);

    r = fabs(r);

    printf("%.2f", r);

    return 0;
}

/* 
��Ŀ������
    ��ʵ���ľ���ֵ��
���룺
    ����һ��ʵ���� 
�����
    ������ľ���ֵ�����������λС����
ʾ����
    -234.00
    234.00
 */