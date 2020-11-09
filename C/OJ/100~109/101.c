#include <stdio.h>

int inverse(int n);

int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d",n+inverse(n));

    return 0;
}

int inverse(int n)
{
    int a[30];
    int t;

    for (size_t i = 0; i < 30; i++)
    {
        a[i] = 0;
    }

    for (t = 0; n != 0; t++)
    {
        a[t] = n % 10;
        n = n / 10;
    }
    for (int i = 0; i < t; i++)
    {
        n = n * 10 + a[i];
    }
    return n;
}

/* 
��Ŀ������
    ����һ��������n������n��������m�����m��n�ĺ͡�Ҫ�����
    ����һ��inverse()������һ��main()������inverse()����
    ����һ������ֵ,��������������������Ľ��ֵ������,����
    ��7631,��������1367 ��
    int inverse(int n)
    {
    //���㲢����n����������
    }
    ���������C/C++�����ύ��ֻ��Ҫ�ύinverse�����Ķ��岿
    �֣��ύ�������ݣ��������
���룺
    һ��������n�����뱣֤��������int��Χ�ڡ�
�����
    ���һ��������n��n���������ĺ͡����ռһ�С�
ʾ����
    1780
    2651
 */