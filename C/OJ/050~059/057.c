#include <stdio.h>
int main(void)
{
    int n, a = 0;

    scanf("%d", &n);

    for (int i = n; i > 1; i--)
    {
        if (n % i == 0)
            a = i;
    }

    if (a != n)
        printf("No");
    else
        printf("Yes");

    return 0;
}

/* 
��Ŀ������
    ����һ��������n���ж�n�Ƿ�����������n�������������Yes��,
    ���������No����
���룺
    ����һ��������n(n<=1000)
�����
    ���n���������"Yes"���������"No"�����ռһ�С�
ʾ����
    2
    Yes
 */