#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if ((x / 10000) >= 1)
    {
        printf("5");
    }
    else if ((x / 1000) >= 1)
    {
        printf("4");
    }
    else if ((x / 100) >= 1)
    {
        printf("3");
    }
    else if ((x / 10) >= 1)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }

    return 0;
}

/* 
��Ŀ������
    ����һ��������5λ�����������ж����Ǽ�λ�����������
���룺
    һ��������5λ���������� 
�����
    �����������λ��������ռһ�С�
ʾ����
    111
    3
 */