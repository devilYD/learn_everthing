#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a, b;

    scanf("%d", &n);

    for (int i = 1; n != 0; i++)
    {
        a = n % 10;
        n = (n - a) / 10;
        printf("%d ", a);
    }

    return 0;
}

/* 
��Ŀ������
    ����һ�����������������������ÿ�����ֺ���һ���ո�
���룺
    ����һ��������n������Լ���n��int��Χ��
�����
    12354
    4 5 3 2 1 
 */